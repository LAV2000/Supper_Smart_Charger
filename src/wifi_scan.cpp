#include <Arduino.h>
#include <WiFi.h>
#include "wifi_scan.h"
void wiFiScanInit(){
    // Khởi tạo WiFi
    WiFi.mode(WIFI_STA); // Chế độ Station
    WiFi.disconnect();   // Ngắt kết nối nếu đã kết nối với AP nào đó
    delay(100);
    Serial.println("WiFi scan initialized");
}

void vTaskUpdateWiFiScan(void *pvParameters) {
    for (;;) {
        Serial.println("Scan start");

        // WiFi.scanNetworks will return the number of networks found.
        int n = WiFi.scanNetworks();
        Serial.println("Scan done");
        if (n == 0) {
            Serial.println("no networks found");
        } else {
            Serial.print(n);
            Serial.println(" networks found");
            Serial.println("Nr | SSID                             | RSSI | CH | Encryption");
            for (int i = 0; i < n; ++i) {
                // Print SSID and RSSI for each network found
                Serial.printf("%2d",i + 1);
                Serial.print(" | ");
                Serial.printf("%-32.32s", WiFi.SSID(i).c_str());
                Serial.print(" | ");
                Serial.printf("%4d", WiFi.RSSI(i));
                Serial.print(" | ");
                Serial.printf("%2d", WiFi.channel(i));
                Serial.print(" | ");
                switch (WiFi.encryptionType(i))
                {
                case WIFI_AUTH_OPEN:
                    Serial.print("open");
                    break;
                case WIFI_AUTH_WEP:
                    Serial.print("WEP");
                    break;
                case WIFI_AUTH_WPA_PSK:
                    Serial.print("WPA");
                    break;
                case WIFI_AUTH_WPA2_PSK:
                    Serial.print("WPA2");
                    break;
                case WIFI_AUTH_WPA_WPA2_PSK:
                    Serial.print("WPA+WPA2");
                    break;
                case WIFI_AUTH_WPA2_ENTERPRISE:
                    Serial.print("WPA2-EAP");
                    break;
                case WIFI_AUTH_WPA3_PSK:
                    Serial.print("WPA3");
                    break;
                case WIFI_AUTH_WPA2_WPA3_PSK:
                    Serial.print("WPA2+WPA3");
                    break;
                case WIFI_AUTH_WAPI_PSK:
                    Serial.print("WAPI");
                    break;
                default:
                    Serial.print("unknown");
                }
                Serial.println();
                delay(10);
            }
        }
        Serial.println("");
    
        // Delete the scan result to free memory for code below.
        WiFi.scanDelete();
        vTaskDelay(pdMS_TO_TICKS(160000)); // Chờ 1 phút
    }
}
