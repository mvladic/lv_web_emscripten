#include <lvgl/lvgl.h>

#include "vars.h"

int32_t slider_value = 70;

int32_t get_var_slider_value() {
    return slider_value;
}

void set_var_slider_value(int32_t value) {
    slider_value = value;
}

extern const char *get_var_slider_value_text() {
    static char text[50];
    lv_snprintf(text, sizeof(text), "%d%%", slider_value);
    return text;
}

extern void set_var_slider_value_text(const char *value) {
}
