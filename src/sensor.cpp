#include "sensor.h"
#include <Arduino.h>

void sensor_init() {
    Serial.println("Sensor initialized!");
}

float read_temperature() {
    return random(20, 30); // Giả lập nhiệt độ ngẫu nhiên
}

void vTaskSensor(void *pvParameters) {
    while (1) {
        float temp = read_temperature();
        Serial.printf("Temperature: %.2f°C\n", temp);
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}
