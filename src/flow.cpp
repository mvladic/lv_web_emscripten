#include <stdio.h>
#include <emscripten.h>

#include <eez/core/os.h>
#include <eez/core/action.h>

#include <eez/flow/flow.h>
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


void replacePageHook(int16_t pageId) {
    static int16_t currentPageId = -1;
    eez::flow::onPageChanged(currentPageId, pageId);
    currentPageId = pageId;

    static screen_1_print *screen1;
    static screen_2_move *screen2;
    static screen_3_setting *screen3;

    if (pageId == 1) {
        if (!screen1) {
            screen1 = create_screen_1_print();
        }
        lv_scr_load(screen1->screen_obj);
    } else if (pageId == 2) {
        if (!screen2) {
            screen2 = create_screen_2_move();
        }
        lv_scr_load(screen2->screen_obj);
    } else if (pageId == 3) {
        if (!screen3) {
            screen3 = create_screen_3_setting();
        }
        lv_scr_load(screen3->screen_obj);
    }
}

extern "C" void flowInit() {
    eez::initAssetsMemory();
    eez::loadMainAssets(eez::assets, sizeof(eez::assets));
    eez::initOtherMemory();
    eez::initAllocHeap(eez::ALLOC_BUFFER, eez::ALLOC_BUFFER_SIZE);

    eez::flow::replacePageHook = replacePageHook;

    eez::flow::start(eez::g_mainAssets);

    replacePageHook(1);
}

extern "C" void flowTick() {
    eez::flow::tick();
}

extern "C" void flowOnPageLoaded(int pageIndex) {
    eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
}

extern "C" void flowPropagateValue(unsigned pageIndex, unsigned componentIndex, unsigned outputIndex) {
    eez::flow::FlowState *flowState = eez::flow::getPageFlowState(eez::g_mainAssets, pageIndex);
    eez::flow::propagateValue(flowState, componentIndex, outputIndex);
}
