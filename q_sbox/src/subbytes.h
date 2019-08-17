/*
 * subbytes.h
 *
 *  Created on: Aug 17, 2019
 *      Author: vader
 */

#ifndef SUBBYTES_H_
#define SUBBYTES_H_

#include <quantum.h>

#include "subfunctions/affine.h"
#include "subfunctions/inverse.h"
#include "subfunctions/square.h"
#include "subfunctions/multiply.h"

void sub_bytes(quantum_reg *reg);


#endif /* SUBBYTES_H_ */
