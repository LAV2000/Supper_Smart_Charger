#include <Arduino.h>
// #include "tasks.h"
#include "display.h"
#include "sensor.h"
#include "communication.h"
#include "wifi_scan.h"

void setup() {
    Serial.begin(115200);
    
    // Khởi tạo các thành phần
    display_init();
    // sensor_init();
    // wiFiScanInit();

    // Tạo các task
    xTaskCreate(vTaskDisplay, "TaskDisplay", 4096, NULL, 1, NULL);
    // xTaskCreate(vTaskSensor, "TaskSensor", 4096, NULL, 1, NULL);
    // xTaskCreate(vTaskCommunication, "TaskComm", 4096, NULL, 1, NULL);
    // xTaskCreate(vTaskUpdateWiFiScan, "TaskWiFiScan", 4096, NULL, 1, NULL);
    // xTaskCreate(vTaskSendDataToServer, "TaskSendData", 4096, NULL, 1, NULL);
}

void loop() {
    // vTaskDelay(1000 / portTICK_PERIOD_MS); // Để FreeRTOS chạy task
}
