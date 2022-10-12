#include "actions.h"
#include "screens.h"

#define _UI_TEMPORARY_STRING_BUFFER_SIZE 32

void action_slider_print_view_value_changed(lv_event_t * e) {
    char buf[_UI_TEMPORARY_STRING_BUFFER_SIZE];
    lv_snprintf(buf, sizeof(buf), "%s%d%s", "", (int)lv_slider_get_value(e->target), "%");
    
    screen_1_print *screen = (screen_1_print *)e->user_data;
    lv_label_set_text(screen->obj_number_print, buf);
}