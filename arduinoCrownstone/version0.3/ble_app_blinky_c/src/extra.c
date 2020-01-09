/*
* Author: Crownstone Team
* Copyright: Crownstone (https://crownstone.rocks)
* Date: 16 Dec., 2019
* License: LGPLv3, Apache License 2.0, and/or MIT (triple-licensed)
*/

#include <extra.h>
#include <nrf_log.h>
#include <main.h>

/*
static void arduinoCommand(const char value){
	NRF_LOG_INFO("Arduino Command %i", value);
}
*/

//REGISTER_ARDUINO_HANDLER(arduinoCommand);


static int giveValue(int value){
	return value;
}

//REGISTER_ARDUINO_HANDLER(giveValue);

static int sumValue(int value){
	value=value+value;
	return value;
}

static int init_blinky(void){
	init();
	return 0;
}

static int mainLoop(){
	loop();
	return 0;
}

/*
* Error code:
* 0 - No Errors
* 1 - No case executed in switch case
*/

static int arduinoSelect(int option, int value){
	switch (option){
		case 1: return giveValue(value); break;
		case 2: return sumValue(value); break; 
		case 3: return init_blinky(); break;
		case 4: return mainLoop(); break;
		default: return 1;
	}
}

REGISTER_ARDUINO_HANDLER(arduinoSelect);
