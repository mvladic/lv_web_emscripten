#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "../flow.h"

static void event_handler_cb_screen_1_print_btn_menu_move_s1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_CLICKED) {
        flowPropagateValue(0, 7, 1);
    }
}

static void event_handler_cb_screen_1_print_btn_menu_setting_s1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_CLICKED) {
        flowPropagateValue(0, 8, 1);
    }
}

static void event_handler_cb_screen_1_print_slider_print_view(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        int32_t value = lv_slider_get_value(ta);
        assignIntegerProperty(0, 10, 2, value, "Failed to assign Value in Slider widget");
    }
}

static void event_handler_cb_screen_2_move_btn_menu_print_s1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_CLICKED) {
        flowPropagateValue(1, 0, 1);
    }
}

static void event_handler_cb_screen_2_move_btn_menu_setting_s1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_CLICKED) {
        flowPropagateValue(1, 3, 1);
    }
}

static void event_handler_cb_screen_3_setting_btn_menu_print_s1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_CLICKED) {
        flowPropagateValue(2, 0, 1);
    }
}

static void event_handler_cb_screen_3_setting_btn_menu_move_s1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    if (event == LV_EVENT_CLICKED) {
        flowPropagateValue(2, 2, 1);
    }
}

screen_1_print *create_screen_1_print() {
    screen_1_print *screen = (screen_1_print *)lv_mem_alloc(sizeof(screen_1_print));
    lv_obj_t *obj = lv_obj_create(0);
    screen->screen_obj = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Background
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_background = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, 480);
            lv_img_set_src(obj, &img_3d_printer_bg);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // Panel Header
            lv_obj_t *obj = lv_obj_create(parent_obj);
            screen->obj_panel_header = obj;
            lv_obj_set_pos(obj, -30, 0);
            lv_obj_set_size(obj, 665, 39);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // Label Header
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    screen->obj_label_header = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_recolor(obj, true);
                    lv_label_set_text(obj, "The #ffffff squareline.gcode# word file is being printed");
                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff9098aa), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &ui_font_small_font, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // IMG Wifi
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    screen->obj_img_wifi = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_img_set_src(obj, &img_icn_wifi);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    lv_obj_set_style_align(obj, LV_ALIGN_RIGHT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // IMG PC
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    screen->obj_img_pc = obj;
                    lv_obj_set_pos(obj, -42, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_img_set_src(obj, &img_icn_pc);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    lv_obj_set_style_align(obj, LV_ALIGN_RIGHT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // IMG USB
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    screen->obj_img_usb = obj;
                    lv_obj_set_pos(obj, -84, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_img_set_src(obj, &img_icn_usb);
                    lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    lv_obj_set_style_align(obj, LV_ALIGN_RIGHT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // BTN Menu Print S1
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_btn_menu_print_s1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 79, 160);
            lv_img_set_src(obj, &img_btn_print);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // BTN Menu Move S1
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_btn_menu_move_s1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 79, 162);
            lv_img_set_src(obj, &img_btn_move);
            lv_obj_add_event_cb(obj, event_handler_cb_screen_1_print_btn_menu_move_s1, LV_EVENT_ALL, screen);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST|LV_OBJ_FLAG_CLICKABLE);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // BTN Menu Setting S1
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_btn_menu_setting_s1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 79, 160);
            lv_img_set_src(obj, &img_btn_setting);
            lv_obj_add_event_cb(obj, event_handler_cb_screen_1_print_btn_menu_setting_s1, LV_EVENT_ALL, screen);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST|LV_OBJ_FLAG_CLICKABLE);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // S1 Content Panel
            lv_obj_t *obj = lv_obj_create(parent_obj);
            screen->obj_s1_content_panel = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 720, 430);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // Slider Print View
                    lv_obj_t *obj = lv_slider_create(parent_obj);
                    screen->obj_slider_print_view = obj;
                    lv_obj_set_pos(obj, 0, -10);
                    lv_obj_set_size(obj, 332, 396);
                    lv_obj_add_event_cb(obj, event_handler_cb_screen_1_print_slider_print_view, LV_EVENT_ALL, screen);
                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_img_src(obj, &img_print_view_bg, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_img_src(obj, &img_print_view_front, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_KNOB | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // Number Print
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            screen->obj_number_print = obj;
                            lv_obj_set_pos(obj, 0, -40);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(0xff00d2ff), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(0xff00d2ff), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // Display Time S1
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    screen->obj_display_time_s1 = obj;
                    lv_obj_set_pos(obj, -26, 30);
                    lv_obj_set_size(obj, 350, 79);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff191d26), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 4, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_color(obj, lv_color_hex(0xff414b62), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_opa(obj, 100, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff191d26), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_color(obj, lv_color_hex(0xff414b62), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_opa(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // DT1
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            screen->obj_dt1 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_PCT(50), LV_PCT(100));
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_bottom(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_left(obj, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_right(obj, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // Label Printing Time 1
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    screen->obj_label_printing_time_1 = obj;
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_recolor(obj, true);
                                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff9098aa), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &ui_font_small_font, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    // IMG Tine 1
                                    lv_obj_t *obj = lv_img_create(parent_obj);
                                    screen->obj_img_tine_1 = obj;
                                    lv_obj_set_pos(obj, 20, 10);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_img_set_src(obj, &img_icn_time_1);
                                    lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    // Label Time 1
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    screen->obj_label_time_1 = obj;
                                    lv_obj_set_pos(obj, 60, 10);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_text(obj, "10:52");
                                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffdbe6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                            }
                        }
                        {
                            // Panel3
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            screen->obj_panel3 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 2, 50);
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff3a3f4b), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // DT2
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            screen->obj_dt2 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_PCT(50), LV_PCT(100));
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_align(obj, LV_ALIGN_RIGHT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_bottom(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_left(obj, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_right(obj, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // Label Printing Time 2
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    screen->obj_label_printing_time_2 = obj;
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_recolor(obj, true);
                                    lv_label_set_text(obj, "Printing time");
                                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff9098aa), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &ui_font_small_font, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    // IMG Tine 2
                                    lv_obj_t *obj = lv_img_create(parent_obj);
                                    screen->obj_img_tine_2 = obj;
                                    lv_obj_set_pos(obj, 20, 10);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_img_set_src(obj, &img_icn_time_2);
                                    lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    // Label Time 2
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    screen->obj_label_time_2 = obj;
                                    lv_obj_set_pos(obj, 60, 11);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_text(obj, "08:25");
                                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffdbe6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                            }
                        }
                    }
                }
                {
                    // Display Heat S1
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    screen->obj_display_heat_s1 = obj;
                    lv_obj_set_pos(obj, -26, 130);
                    lv_obj_set_size(obj, 350, 79);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff191d26), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 4, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_color(obj, lv_color_hex(0xff414b62), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_opa(obj, 100, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff191d26), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_color(obj, lv_color_hex(0xff414b62), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_opa(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // DT3
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            screen->obj_dt3 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_PCT(50), LV_PCT(100));
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_bottom(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_left(obj, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_right(obj, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // Label Printing Head Temp
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    screen->obj_label_printing_head_temp = obj;
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_recolor(obj, true);
                                    lv_label_set_text(obj, "Head Temp.");
                                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff9098aa), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &ui_font_small_font, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    // IMG Head
                                    lv_obj_t *obj = lv_img_create(parent_obj);
                                    screen->obj_img_head = obj;
                                    lv_obj_set_pos(obj, 15, 10);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_img_set_src(obj, &img_icn_head);
                                    lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    // Label Head Temp
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    screen->obj_label_head_temp = obj;
                                    lv_obj_set_pos(obj, 40, 10);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_text(obj, "195°");
                                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffdbe6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    // Label Printing Head Temp2
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    screen->obj_label_printing_head_temp2 = obj;
                                    lv_obj_set_pos(obj, 95, 13);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_text(obj, "/ 195°");
                                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff9098aa), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &ui_font_small_font, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                            }
                        }
                        {
                            // Panel1
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            screen->obj_panel1 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 2, 50);
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff3a3f4b), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // DT4
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            screen->obj_dt4 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_PCT(50), LV_PCT(100));
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_align(obj, LV_ALIGN_RIGHT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_bottom(obj, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_left(obj, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_right(obj, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // Label Printing Bed Temp
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    screen->obj_label_printing_bed_temp = obj;
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_recolor(obj, true);
                                    lv_label_set_text(obj, "Bed Temp.");
                                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff9098aa), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &ui_font_small_font, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    // IMG Bad
                                    lv_obj_t *obj = lv_img_create(parent_obj);
                                    screen->obj_img_bad = obj;
                                    lv_obj_set_pos(obj, 20, 10);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_img_set_src(obj, &img_icn_bed);
                                    lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    // Label Time 3
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    screen->obj_label_time_3 = obj;
                                    lv_obj_set_pos(obj, 55, 10);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_text(obj, "65°");
                                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xffdbe6ff), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                                {
                                    // Label Printing Bed Temp1
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    screen->obj_label_printing_bed_temp1 = obj;
                                    lv_obj_set_pos(obj, 100, 13);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_text(obj, "/ 65°");
                                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff9098aa), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_font(obj, &ui_font_small_font, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                            }
                        }
                    }
                }
                {
                    // Panel Buttons S1
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    screen->obj_panel_buttons_s1 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 380, 200);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // BTN Pause
                            lv_obj_t *obj = lv_img_create(parent_obj);
                            screen->obj_btn_pause = obj;
                            lv_obj_set_pos(obj, 10, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_img_set_src(obj, &img_btn_print_down);
                            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // BTN Pause Top
                                    lv_obj_t *obj = lv_img_create(parent_obj);
                                    screen->obj_btn_pause_top = obj;
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_img_set_src(obj, &img_btn_print_top_off);
                                    lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST|LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CHECKABLE);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    lv_obj_set_style_radius(obj, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_shadow_width(obj, 5, LV_PART_MAIN | LV_STATE_PRESSED);
                                    lv_obj_set_style_shadow_spread(obj, 5, LV_PART_MAIN | LV_STATE_PRESSED);
                                    lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff00d2ff), LV_PART_MAIN | LV_STATE_PRESSED);
                                    lv_obj_set_style_shadow_width(obj, 9, LV_PART_MAIN | LV_STATE_CHECKED);
                                    lv_obj_set_style_shadow_spread(obj, 3, LV_PART_MAIN | LV_STATE_CHECKED);
                                    lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff00d2ff), LV_PART_MAIN | LV_STATE_CHECKED);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            // Image Pause
                                            lv_obj_t *obj = lv_img_create(parent_obj);
                                            screen->obj_image_pause = obj;
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_img_set_src(obj, &img_icn_pause);
                                            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                    }
                                }
                            }
                        }
                        {
                            // BTN Cancel
                            lv_obj_t *obj = lv_img_create(parent_obj);
                            screen->obj_btn_cancel = obj;
                            lv_obj_set_pos(obj, -30, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_img_set_src(obj, &img_btn_print_down);
                            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                            lv_obj_set_style_align(obj, LV_ALIGN_RIGHT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // BTN Cancel Top
                                    lv_obj_t *obj = lv_img_create(parent_obj);
                                    screen->obj_btn_cancel_top = obj;
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_img_set_src(obj, &img_btn_print_top_off);
                                    lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST|LV_OBJ_FLAG_CLICKABLE);
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                    lv_obj_set_style_radius(obj, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_shadow_width(obj, 5, LV_PART_MAIN | LV_STATE_PRESSED);
                                    lv_obj_set_style_shadow_spread(obj, 5, LV_PART_MAIN | LV_STATE_PRESSED);
                                    lv_obj_set_style_shadow_color(obj, lv_color_hex(0xff00d2ff), LV_PART_MAIN | LV_STATE_PRESSED);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            // Image Cancel
                                            lv_obj_t *obj = lv_img_create(parent_obj);
                                            screen->obj_image_cancel = obj;
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_img_set_src(obj, &img_icn_stop);
                                            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
                                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return screen;
}

void tick_screen_1_print(screen_1_print *screen) {
    {
        int32_t value_new = evalIntegerProperty(0, 10, 2, "Failed to evaluate Value in Slider widget");
        int32_t value_cur = lv_slider_get_value(screen->obj_slider_print_view);
        if (value_new != value_cur) lv_slider_set_value(screen->obj_slider_print_view, value_new, LV_ANIM_OFF);
    }
    {
        const char *text_new = evalTextProperty(0, 11, 2, "Failed to evaluate Text in Label widget");
        const char *text_cur = lv_label_get_text(screen->obj_number_print);
        if (strcmp(text_new, text_cur) != 0) lv_label_set_text(screen->obj_number_print, text_new);
    }
}

screen_2_move *create_screen_2_move() {
    screen_2_move *screen = (screen_2_move *)lv_mem_alloc(sizeof(screen_2_move));
    lv_obj_t *obj = lv_obj_create(0);
    screen->screen_obj = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Background
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_background = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 480);
            lv_img_set_src(obj, &img_3d_printer_bg);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // BTN Menu Print S1
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_btn_menu_print_s1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 79, 160);
            lv_img_set_src(obj, &img_btn_print);
            lv_obj_add_event_cb(obj, event_handler_cb_screen_2_move_btn_menu_print_s1, LV_EVENT_ALL, screen);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST|LV_OBJ_FLAG_CLICKABLE);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // BTN Menu Move S1
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_btn_menu_move_s1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 79, 162);
            lv_img_set_src(obj, &img_btn_move);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // BTN Menu Setting S1
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_btn_menu_setting_s1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 79, 160);
            lv_img_set_src(obj, &img_btn_setting);
            lv_obj_add_event_cb(obj, event_handler_cb_screen_2_move_btn_menu_setting_s1, LV_EVENT_ALL, screen);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST|LV_OBJ_FLAG_CLICKABLE);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
    return screen;
}

void tick_screen_2_move(screen_2_move *screen) {
}

screen_3_setting *create_screen_3_setting() {
    screen_3_setting *screen = (screen_3_setting *)lv_mem_alloc(sizeof(screen_3_setting));
    lv_obj_t *obj = lv_obj_create(0);
    screen->screen_obj = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Background
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_background = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 480);
            lv_img_set_src(obj, &img_3d_printer_bg);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
        }
        {
            // BTN Menu Print S1
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_btn_menu_print_s1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 79, 160);
            lv_img_set_src(obj, &img_btn_print);
            lv_obj_add_event_cb(obj, event_handler_cb_screen_3_setting_btn_menu_print_s1, LV_EVENT_ALL, screen);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST|LV_OBJ_FLAG_CLICKABLE);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // BTN Menu Move S1
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_btn_menu_move_s1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 79, 162);
            lv_img_set_src(obj, &img_btn_move);
            lv_obj_add_event_cb(obj, event_handler_cb_screen_3_setting_btn_menu_move_s1, LV_EVENT_ALL, screen);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST|LV_OBJ_FLAG_CLICKABLE);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // BTN Menu Setting S1
            lv_obj_t *obj = lv_img_create(parent_obj);
            screen->obj_btn_menu_setting_s1 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 79, 160);
            lv_img_set_src(obj, &img_btn_setting);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_ADV_HITTEST);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
    return screen;
}

void tick_screen_3_setting(screen_3_setting *screen) {
}

