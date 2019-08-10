#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_partition.h"
#include "driver/i2s.h"
#include "driver/adc.h"
#include "esp_spi_flash.h"
#include "stdio.h"
#include "string.h"


static const char* TAG = "PAM";
#define vRef 1100
#define ADC1_TEST_CHANNEL (ADC1_CHANNEL_7)
#define PARTITION_NAME "storage"

