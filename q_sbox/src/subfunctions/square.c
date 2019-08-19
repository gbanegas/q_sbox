/*
 * square.c
 *
 *  Created on: Aug 17, 2019
 *      Author: vader
 */

#include "square.h"

void square(quantum_reg *reg, int offset, int offset1) {
	//todo: put in the correct position
	quantum_cnot(4 + offset, 8 + offset1, reg);
	quantum_cnot(6 + offset, 8 + offset1, reg);
	quantum_cnot(5 + offset, 9 + offset1, reg);
	quantum_cnot(4 + offset, 10 + offset1, reg);
	quantum_cnot(7 + offset, 10 + offset1, reg);
	quantum_cnot(5 + offset, 11 + offset1, reg);
	quantum_cnot(6 + offset, 12 + offset1, reg);
	quantum_cnot(7 + offset, 12 + offset1, reg);
	quantum_cnot(6 + offset, 13 + offset1, reg);
	quantum_cnot(6 + offset, 15 + offset1, reg);
	quantum_cnot(5 + offset, 14 + offset1, reg);
	quantum_cnot(12 + offset1, 14 + offset1, reg);
	quantum_print_qureg(reg);

	return;
}
