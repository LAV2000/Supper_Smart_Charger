#include "communication.h"
#include <Arduino.h>

void send_data(float temp) {
    Serial.printf("Sending data to server: %.2f°C\n", temp);
}

void vTaskCommunication(void *pvParameters) {
    while (1) {
        send_data(random(20, 30));
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}
