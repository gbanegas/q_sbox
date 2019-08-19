/*
 * subbytes.c
 *
 *  Created on: Aug 17, 2019
 *      Author: vader
 */

#include "subbytes.h"



void sub_bytes(quantum_reg *reg)
{
	invert(reg);
	transform(reg);
	return;
}
