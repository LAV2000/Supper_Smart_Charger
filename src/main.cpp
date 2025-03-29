#include <Arduino.h>

#define LED_PIN 2  // Chân GPIO2 (LED tích hợp trên ESP32)

void blinkTask(void *parameter) {
    while (1) {
        digitalWrite(LED_PIN, HIGH);  // Bật LED
        vTaskDelay(500 / portTICK_PERIOD_MS); // Chờ 500ms
        digitalWrite(LED_PIN, LOW);   // Tắt LED
        vTaskDelay(500 / portTICK_PERIOD_MS); // Chờ 500ms
    }
}

void setup() {
    pinMode(LED_PIN, OUTPUT);  // Đặt chân LED là OUTPUT
    xTaskCreate(blinkTask, "Blink LED", 1024, NULL, 1, NULL); // Tạo task RTOS
}

void loop() {
    vTaskDelay(1000 / portTICK_PERIOD_MS); // Nhàn rỗi (FreeRTOS chạy task riêng)
}
