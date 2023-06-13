#include "styles.h"
#include "images.h"
#include "fonts.h"

void apply_style_label_style_base(lv_obj_t *obj) {
    lv_obj_set_style_border_color(obj, lv_color_hex(0xffd01e1e), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(obj, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(obj, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
};
void apply_style_label_style_1(lv_obj_t *obj) {
    apply_style_label_style_base(obj);
    lv_obj_set_style_text_font(obj, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(obj, 128, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(obj, lv_color_hex(0xffacacac), LV_PART_MAIN | LV_STATE_DEFAULT);
};
void apply_style_label_style_2(lv_obj_t *obj) {
    apply_style_label_style_1(obj);
};
void apply_style_penel_style_1(lv_obj_t *obj) {
};
void apply_style_penel_style_2(lv_obj_t *obj) {
    apply_style_penel_style_1(obj);
};

