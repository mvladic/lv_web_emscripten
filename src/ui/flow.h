#pragma once

#include <eez/gui/data.h>
#include <eez/gui/widget.h>

namespace eez {
namespace gui {

enum DataEnum {
    DATA_ID_NONE = 0
};

void data_none(DataOperationEnum operation, const WidgetCursor &cursor, Value &value);

typedef void (*DataOperationsFunction)(DataOperationEnum operation, const WidgetCursor &widgetCursor, Value &value);

extern DataOperationsFunction g_dataOperationsFunctions[];

enum ActionsEnum {
    ACTION_ID_NONE = 0,
    ACTION_ID_SLIDER_PRINT_VIEW_VALUE_CHANGED = 1
};

void action_slider_print_view_value_changed();

extern ActionExecFunc g_actionExecFunctions[];

enum ThemesEnum {
    THEME_ID_DEFAULT = 0
};

enum ColorsEnum {
    COLOR_ID_TRANSPARENT = 65535,
    COLOR_ID_COLOR = 0,
    COLOR_ID_BACKGROUND_COLOR = 1,
	COLOR_ID_CUSTOM_UNDEFINED = 2
};

extern const uint8_t assets[1430];

} // namespace gui
} // namespace eez
