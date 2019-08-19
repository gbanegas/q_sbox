/*
 * multiply.c
 *
 *  Created on: Aug 17, 2019
 *      Author: vader
 */

#include "multiply.h"

void multiply(quantum_reg *reg, int offset1, int offset2, int offset3) {

	quantum_toffoli(7+offset1, 9+offset2, 16+offset3, reg);
	quantum_toffoli(6+offset1, 10+offset2, 16+offset3, reg);
	quantum_toffoli(5+offset1, 11+offset2, 16+offset3, reg);
	quantum_toffoli(4+offset1, 12+offset2, 16+offset3, reg);
	quantum_toffoli(3+offset1, 13+offset2, 16+offset3, reg);
	quantum_toffoli(2+offset1, 14+offset2, 16+offset3, reg);
	quantum_toffoli(1+offset1, 15+offset2, 16+offset3, reg);

	quantum_toffoli(7+offset1, 10+offset2, 17+offset3, reg);
	quantum_toffoli(6+offset1, 11+offset2, 17+offset3, reg);
	quantum_toffoli(5+offset1, 12+offset2, 17+offset3, reg);
	quantum_toffoli(4+offset1, 13+offset2, 17+offset3, reg);
	quantum_toffoli(3+offset1, 14+offset2, 17+offset3, reg);
	quantum_toffoli(2+offset1, 15+offset2, 17+offset3, reg);

	quantum_toffoli(7+offset1, 11+offset2, 18+offset3, reg);
	quantum_toffoli(6+offset1, 12+offset2, 18+offset3, reg);
	quantum_toffoli(5+offset1, 13+offset2, 18+offset3, reg);
	quantum_toffoli(4+offset1, 14+offset2, 18+offset3, reg);
	quantum_toffoli(3+offset1, 15+offset2, 18+offset3, reg);

	quantum_toffoli(7+offset1, 12+offset2, 19+offset3, reg);
	quantum_toffoli(6+offset1, 13+offset2, 19+offset3, reg);
	quantum_toffoli(5+offset1, 14+offset2, 19+offset3, reg);
	quantum_toffoli(4+offset1, 15+offset2, 19+offset3, reg);

	quantum_toffoli(7+offset1, 13+offset2, 20+offset3, reg);
	quantum_toffoli(6+offset1, 14+offset2, 20+offset3, reg);
	quantum_toffoli(5+offset1, 15+offset2, 20+offset3, reg);

	quantum_toffoli(7+offset1, 14+offset2, 21+offset3, reg);
	quantum_toffoli(6+offset1, 15+offset2, 21+offset3, reg);

	quantum_toffoli(7+offset1, 15+offset2, 22+offset3, reg);

	//quantum_print_qureg(reg);

	quantum_cnot(20+offset3, 16+offset3, reg);
	quantum_cnot(21+offset3, 16+offset3, reg);

	quantum_cnot(21+offset3, 17+offset3, reg);
	quantum_cnot(22+offset3, 17+offset3, reg);

	quantum_cnot(22+offset3, 18+offset3, reg);

	quantum_cnot(22+offset3, 23+offset3, reg);
	quantum_cnot(20+offset3, 23+offset3, reg);
	quantum_cnot(19+offset3, 23+offset3, reg);

	quantum_cnot(21+offset3, 22+offset3, reg);
	quantum_cnot(19+offset3, 22+offset3, reg);
	quantum_cnot(18+offset3, 22+offset3, reg);

	quantum_cnot(20+offset3, 21+offset3, reg);
	quantum_cnot(18+offset3, 21+offset3, reg);
	quantum_cnot(17+offset3, 21+offset3, reg);

	quantum_cnot(19+offset3, 20+offset3, reg);
	quantum_cnot(17+offset3, 20+offset3, reg);
	quantum_cnot(16+offset3, 20+offset3, reg);

	quantum_cnot(18+offset3, 19+offset3, reg);
	quantum_cnot(16+offset3, 19+offset3, reg);

	quantum_cnot(17+offset3, 18+offset3, reg);

	quantum_cnot(16+offset3, 17+offset3, reg);

	//quantum_print_qureg(reg);

	quantum_toffoli(7+offset1, 8+offset2, 23+offset3, reg);
	quantum_toffoli(6+offset1, 9+offset2, 23+offset3, reg);
	quantum_toffoli(5+offset1, 10+offset2, 23+offset3, reg);
	quantum_toffoli(4+offset1, 11+offset2, 23+offset3, reg);
	quantum_toffoli(3+offset1, 12+offset2, 23+offset3, reg);
	quantum_toffoli(2+offset1, 13+offset2, 23+offset3, reg);
	quantum_toffoli(1+offset1, 14+offset2, 23+offset3, reg);
	quantum_toffoli(0+offset1, 15+offset2, 23+offset3, reg);

	quantum_toffoli(6+offset1, 8+offset2, 22+offset3, reg);
	quantum_toffoli(5+offset1, 9+offset2, 22+offset3, reg);
	quantum_toffoli(4+offset1, 10+offset2, 22+offset3, reg);
	quantum_toffoli(3+offset1, 11+offset2, 22+offset3, reg);
	quantum_toffoli(2+offset1, 12+offset2, 22+offset3, reg);
	quantum_toffoli(1+offset1, 13+offset2, 22+offset3, reg);
	quantum_toffoli(0+offset1, 14+offset2, 22+offset3, reg);

	quantum_toffoli(5+offset1, 8+offset2, 21+offset3, reg);
	quantum_toffoli(4+offset1, 9+offset2, 21+offset3, reg);
	quantum_toffoli(3+offset1, 10+offset2, 21+offset3, reg);
	quantum_toffoli(2+offset1, 11+offset2, 21+offset3, reg);
	quantum_toffoli(1+offset1, 12+offset2, 21+offset3, reg);
	quantum_toffoli(0+offset1, 13+offset2, 21+offset3, reg);

	quantum_toffoli(4+offset1, 8+offset2, 20+offset3, reg);
	quantum_toffoli(3+offset1, 9+offset2, 20+offset3, reg);
	quantum_toffoli(2+offset1, 10+offset2, 20+offset3, reg);
	quantum_toffoli(1+offset1, 11+offset2, 20+offset3, reg);
	quantum_toffoli(0+offset1, 12+offset2, 20+offset3, reg);

	quantum_toffoli(3+offset1, 8+offset2, 19+offset3, reg);
	quantum_toffoli(2+offset1, 9+offset2, 19+offset3, reg);
	quantum_toffoli(1+offset1, 10+offset2, 19+offset3, reg);
	quantum_toffoli(0+offset1, 11+offset2, 19+offset3, reg);

	quantum_toffoli(2+offset1, 8+offset2, 18+offset3, reg);
	quantum_toffoli(1+offset1, 9+offset2, 18+offset3, reg);
	quantum_toffoli(0+offset1, 10+offset2, 18+offset3, reg);

	quantum_toffoli(1+offset1, 8+offset2, 17+offset3, reg);
	quantum_toffoli(0+offset1, 9+offset2, 17+offset3, reg);

	quantum_toffoli(0+offset1, 8+offset2, 16+offset3, reg);

	return;

}
