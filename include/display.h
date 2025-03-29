#ifndef DISPLAY_H
#define DISPLAY_H

void display_init();  // Khởi tạo màn hình
void update_display(); // Hàm cập nhật màn hình
void vTaskDisplay(void *pvParameters);

#endif
