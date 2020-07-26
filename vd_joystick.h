/*
 * vd_joystick.h
 *
 *  Created on: May 8, 2020
 *      Author: Andrei Bragarenco
 */

#ifndef _VD_JOYSTICK_H_
#define _VD_JOYSTICK_H_

#include "platform_config.h"

enum {JSK_AXIS_X, JSK_AXIS_Y, JSK_AXIS_NR_OF};
enum {JSK_BUTTON_1, JSK_BUTTON_NR_OF};

struct vd_Joystick_t{

	//int16_t axisValue[JSK_AXIS_NR_OF];
	//int8_t buttonValue[JSK_BUTTON_NR_OF];

	int8_t potentiometerIds[JSK_AXIS_NR_OF];
	int8_t contactIds[JSK_BUTTON_NR_OF];

};



int Joystick_Init();

int Joystick_GetPos(int axis, int j_id);
int Joystick_GetX(int j_id);
int Joystick_GetY(int j_id);
int Joystick_GetB(int j_id);


#endif /* _VD_JOYSTICK_H_ */
