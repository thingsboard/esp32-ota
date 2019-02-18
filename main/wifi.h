/**
 * @file wifi.h
 */

#ifndef PRJ_WIFI_MODULE
#define PRJ_WIFI_MODULE

#include "esp_event_loop.h"
#include "freertos/FreeRTOS.h"

#define WIFI_SSID CONFIG_WIFI_SSID
#define WIFI_PASS CONFIG_WIFI_PASSWORD

void initialise_wifi(const char *running_partition_label);

#endif
