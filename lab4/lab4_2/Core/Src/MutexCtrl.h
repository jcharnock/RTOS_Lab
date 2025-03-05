/*
 * MutexCtrl.h
 *
 *  Created on: Mar 5, 2025
 *      Author: eec9960
 */

#ifndef SRC_MUTEXCTRL_H_
#define SRC_MUTEXCTRL_H_

#include "cmsis_os.h"
#include "stm32l4xx_hal.h"

void init_mutex_and_led(void);
void load_and_flash_led(int numFlashes, int flashPeriod);


#endif /* SRC_MUTEXCTRL_H_ */
