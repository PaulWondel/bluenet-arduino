/*
 * Author: Crownstone Team
 * Copyright: Crownstone (https://crownstone.rocks)
 * Date: 9 Jan., 2020
 * License: LGPLv3, Apache License 2.0, and/or MIT (triple-licensed)
 */

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "nrf_sdh.h"
#include "nrf_sdh_ble.h"
#include "nrf_sdh_soc.h"
#include "nrf_pwr_mgmt.h"
#include "app_timer.h"
#include "boards.h"
#include "bsp.h"
#include "bsp_btn_ble.h"
#include "ble.h"
#include "ble_hci.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
#include "ble_db_discovery.h"
#include "ble_lbs_c.h"
#include "nrf_ble_gatt.h"
#include "nrf_ble_scan.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"


void init(void);
void loop(void);

/*
static void leds_init(void);

static void scan_start(void);

static void ble_stack_init(void);

static void buttons_init(void);

static void log_init(void);

static void timer_init(void);

static void power_management_init(void);

static void scan_init(void);

static void gatt_init(void);

static void idle_state_handle(void);
*/
