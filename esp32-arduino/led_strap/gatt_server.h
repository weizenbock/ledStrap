#ifndef _GATT_SERVER_H_
#define _GATT_SERVER_H_

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "bt.h"
#include "bta_api.h"

#include "esp_gap_ble_api.h"
#include "esp_gatts_api.h"
#include "esp_bt_defs.h"
#include "esp_bt_main.h"

#include "Arduino.h"

class GattServer {
  public:
    GattServer(void);
//  ~GattServer(void);
    void setConnectCallback(void (*handleConnectCallback)(esp_ble_gatts_cb_param_t*));
    void setReadCallback(void (*handleReadCallback)(esp_ble_gatts_cb_param_t*, esp_gatt_value_t*));
    void setWriteCallback(void (*handleWriteCallback)(esp_ble_gatts_cb_param_t*));

    bool begin(String localName=String());
//  void end(void);

  private:
    
};


#endif

