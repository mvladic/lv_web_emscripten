#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include "lvgl/lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct screen_1_print_t {
    lv_obj_t *screen_obj;
    
    lv_obj_t *obj_background;
    lv_obj_t *obj_panel_header;
    lv_obj_t *obj_label_header;
    lv_obj_t *obj_img_wifi;
    lv_obj_t *obj_img_pc;
    lv_obj_t *obj_img_usb;
    lv_obj_t *obj_btn_menu_print_s1;
    lv_obj_t *obj_btn_menu_move_s1;
    lv_obj_t *obj_btn_menu_setting_s1;
    lv_obj_t *obj_s1_content_panel;
    lv_obj_t *obj_slider_print_view;
    lv_obj_t *obj_number_print;
    lv_obj_t *obj_display_time_s1;
    lv_obj_t *obj_dt1;
    lv_obj_t *obj_label_printing_time_1;
    lv_obj_t *obj_img_tine_1;
    lv_obj_t *obj_label_time_1;
    lv_obj_t *obj_panel3;
    lv_obj_t *obj_dt2;
    lv_obj_t *obj_label_printing_time_2;
    lv_obj_t *obj_img_tine_2;
    lv_obj_t *obj_label_time_2;
    lv_obj_t *obj_display_heat_s1;
    lv_obj_t *obj_dt3;
    lv_obj_t *obj_label_printing_head_temp;
    lv_obj_t *obj_img_head;
    lv_obj_t *obj_label_head_temp;
    lv_obj_t *obj_label_printing_head_temp2;
    lv_obj_t *obj_panel1;
    lv_obj_t *obj_dt4;
    lv_obj_t *obj_label_printing_bed_temp;
    lv_obj_t *obj_img_bad;
    lv_obj_t *obj_label_time_3;
    lv_obj_t *obj_label_printing_bed_temp1;
    lv_obj_t *obj_panel_buttons_s1;
    lv_obj_t *obj_btn_pause;
    lv_obj_t *obj_btn_pause_top;
    lv_obj_t *obj_image_pause;
    lv_obj_t *obj_btn_cancel;
    lv_obj_t *obj_btn_cancel_top;
    lv_obj_t *obj_image_cancel;
} screen_1_print;

screen_1_print *create_screen_1_print();
void tick_screen_1_print(screen_1_print *screen);

typedef struct screen_2_move_t {
    lv_obj_t *screen_obj;
    
    lv_obj_t *obj_background;
    lv_obj_t *obj_btn_menu_print_s1;
    lv_obj_t *obj_btn_menu_move_s1;
    lv_obj_t *obj_btn_menu_setting_s1;
} screen_2_move;

screen_2_move *create_screen_2_move();
void tick_screen_2_move(screen_2_move *screen);

typedef struct screen_3_setting_t {
    lv_obj_t *screen_obj;
    
    lv_obj_t *obj_background;
    lv_obj_t *obj_btn_menu_print_s1;
    lv_obj_t *obj_btn_menu_move_s1;
    lv_obj_t *obj_btn_menu_setting_s1;
} screen_3_setting;

screen_3_setting *create_screen_3_setting();
void tick_screen_3_setting(screen_3_setting *screen);



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/