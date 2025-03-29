#ifndef SENSOR_H
#define SENSOR_H

void sensor_init();
float read_temperature();
void vTaskSensor(void *pvParameters);

#endif
