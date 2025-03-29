// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_name = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_name, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_name, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_name, 1 );
lv_obj_set_y( ui_name, -121 );
lv_obj_set_align( ui_name, LV_ALIGN_CENTER );
lv_label_set_text(ui_name,"Luong Anh Van");

ui_upButton = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_upButton, 100);
lv_obj_set_height( ui_upButton, 39);
lv_obj_set_x( ui_upButton, 0 );
lv_obj_set_y( ui_upButton, -68 );
lv_obj_set_align( ui_upButton, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_upButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_upButton, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_downButton = lv_btn_create(ui_Screen1);
lv_obj_set_width( ui_downButton, 100);
lv_obj_set_height( ui_downButton, 39);
lv_obj_set_x( ui_downButton, 2 );
lv_obj_set_y( ui_downButton, 112 );
lv_obj_set_align( ui_downButton, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_downButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_downButton, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Spinner1 = lv_spinner_create(ui_Screen1,1000,90);
lv_obj_set_width( ui_Spinner1, 80);
lv_obj_set_height( ui_Spinner1, 80);
lv_obj_set_x( ui_Spinner1, -2 );
lv_obj_set_y( ui_Spinner1, 25 );
lv_obj_set_align( ui_Spinner1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Spinner1, LV_OBJ_FLAG_CLICKABLE );    /// Flags

uic_name = ui_name;

}
