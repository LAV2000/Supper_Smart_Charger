#ifndef TASKS_H
#define TASKS_H

void vTaskDisplay(void *pvParameters);
void vTaskSensor(void *pvParameters);
void vTaskCommunication(void *pvParameters);
void vTaskUpdateWiFiScan(void *pvParameters);
// void vTaskSendDataToServer(void *pvParameters);

#endif
