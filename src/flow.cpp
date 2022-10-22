#include <stdio.h>
#include <emscripten.h>

#include <eez/core/os.h>
#include <eez/core/action.h>

#include <eez/flow/flow.h>
#include <eez/flow/expression.h>
#include <eez/flow/hooks.h>
#include <eez/flow/debugger.h>
#include <eez/flow/components.h>
#include <eez/flow/flow_defs_v3.h>

#include "ui/screens.h"
#include "ui/flow_def.h"
namespace eez {

ActionExecFunc g_actionExecFunctions[] = {
    0
};

}

static int16_t currentPageId = -1;
static screen_1_print *screen1;
static screen_2_move *screen2;
static screen_3_setting *screen3;

void replacePageHook(int16_t pageId, uint32_t animType, uint32_t speed, uint32_t delay) {
    eez::flow::onPageChanged(currentPageId, pageId);
    currentPageId = pageId;

    if (pageId == 1) {
        if (!screen1) {
            screen1 = create_screen_1_print();
        }
        lv_scr_load_anim(screen1->screen_obj, (lv_scr_load_anim_t)animType, speed, delay, false);
    } else if (pageId == 2) {
        if (!screen2) {
            screen2 = create_screen_2_move();
        }
        lv_scr_load_anim(screen2->screen_obj, (lv_scr_load_anim_t)animType, speed, delay, false);
    } else if (pageId == 3) {
        if (!screen3) {
            screen3 = create_screen_3_setting();
        }
        lv_scr_load_anim(screen3->screen_obj, (lv_scr_load_anim_t)animType, speed, delay, false);
    }
}

extern "C" void flowInit() {
    eez::initAssetsMemory();
    eez::loadMainAssets(eez::assets, sizeof(eez::assets));
    eez::initOtherMemory();
    eez::initAllocHeap(eez::ALLOC_BUFFER, eez::ALLOC_BUFFER_SIZE);

    eez::flow::replacePageHook = replacePageHook;

    eez::flow::start(eez::g_mainAssets);

    replacePageHook(1, 0, 0, 0);
}

extern "C" void flowTick() {
    eez::flow::tick();

    if (currentPageId == 1) {
        tick_screen_1_print(screen1);
    } else if (currentPageId == 2) {
        tick_screen_2_move(screen2);
    } else if (currentPageId == 3) {
        tick_screen_3_setting(screen3);
    }
}

extern "C" void flowOnPageLoaded(int pageIndex) {
    eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
}

extern "C" void flowPropagateValue(unsigned pageIndex, unsigned componentIndex, unsigned outputIndex) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
    eez::flow::propagateValue(flowState, componentIndex, outputIndex);
}

static char textValue[1000];

extern "C" const char *evalTextProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, const char *errorMessage) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
    eez::Value value;
    if (!eez::flow::evalProperty(flowState, componentIndex, propertyIndex, value, errorMessage)) {
        return "";
    }
    value.toText(textValue, sizeof(textValue));
    return textValue;
}

extern "C" int32_t evalIntegerProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, const char *errorMessage) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
    eez::Value value;
    if (!eez::flow::evalProperty(flowState, componentIndex, propertyIndex, value, errorMessage)) {
        return 0;
    }
    int err;
    int32_t intValue = value.toInt32(&err);
    if (err) {
        eez::flow::throwError(flowState, componentIndex, errorMessage);
        return 0;
    }
    return intValue;
}

extern "C" void assignIntegerProperty(unsigned pageIndex, unsigned componentIndex, unsigned propertyIndex, int32_t value, const char *errorMessage) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);

    auto component = flowState->flow->components[componentIndex];

    eez::Value dstValue;
    if (!eez::flow::evalAssignableExpression(flowState, componentIndex, component->properties[propertyIndex]->evalInstructions, dstValue, errorMessage)) {
        return;
    }

    eez::Value srcValue(value, eez::VALUE_TYPE_INT32);

    eez::flow::assignValue(flowState, componentIndex, dstValue, srcValue);
}