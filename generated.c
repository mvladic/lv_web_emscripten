#include "lvgl/lvgl.h"
#include "generated.h"

lv_obj_t *setup_screen_main() {
    lv_obj_t *obj = lv_obj_create(0);
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    
    lv_obj_t *parent_obj = obj;
    
    {
        lv_obj_t *obj = lv_label_create(parent_obj);
        lv_obj_set_pos(obj, 347, 42);
        lv_obj_set_size(obj, 106, 34);
        lv_label_set_text(obj, "Hello, world!");
        
        lv_obj_set_style_text_color(obj, lv_color_hex(0x00ec2323), 0);
        lv_obj_set_style_transform_angle(obj, 450, 0);
        lv_obj_set_style_translate_x(obj, 10, 0);
        lv_obj_set_style_translate_y(obj, 10, 0);
    }
    
    {
        lv_obj_t *obj = lv_label_create(parent_obj);
        lv_obj_set_pos(obj, 348, 76);
        lv_obj_set_size(obj, 104, 32);
        lv_label_set_text(obj, "\"Quoted text\"");
    }
    
    {
        lv_obj_t *obj = lv_label_create(parent_obj);
        lv_obj_set_pos(obj, 156, 146);
        lv_obj_set_size(obj, 489, 189);
        lv_label_set_text(obj, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent iaculis eu nisi et aliquam. Maecenas consequat dui id laoreet semper. Cras nec urna at dui tempus interdum eget id tortor. Quisque quis volutpat velit. Nunc vel lectus erat. Vivamus porta magna viverra sem placerat, eu dictum lacus fringilla. Duis suscipit tellus felis, id vehicula orci dignissim tempus. Quisque elit mauris, blandit id libero non, efficitur venenatis dolor. Proin mauris mi, facilisis eget porttitor nec, pellentesque at lorem. Cras at nulla et odio rhoncus commodo et in velit. Aenean dapibus placerat ipsum, nec condimentum velit semper vitae. Nulla dignissim condimentum placerat. Nunc luctus efficitur varius.");
    }
    
    {
        lv_obj_t *obj = lv_btn_create(parent_obj);
        lv_obj_set_pos(obj, 21, 413);
        lv_obj_set_size(obj, 100, 40);
        
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 50, 31);
            lv_label_set_text(obj, "Button 1");
        }
    }
    
    {
        lv_obj_t *obj = lv_btn_create(parent_obj);
        lv_obj_set_pos(obj, 351, 413);
        lv_obj_set_size(obj, 100, 40);
        
        lv_obj_set_style_bg_color(obj, lv_color_hex(0x00f36221), 0);
        
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 100, 40);
            lv_label_set_text(obj, "Button 2");
        }
    }
    
    {
        lv_obj_t *obj = lv_btn_create(parent_obj);
        lv_obj_set_pos(obj, 684, 413);
        lv_obj_set_size(obj, 100, 40);
        
        lv_obj_set_style_bg_color(obj, lv_color_hex(0x0022d022), 0);
        
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 100, 40);
            lv_label_set_text(obj, "Button 3");
        }
    }
    
    return obj;
    
}