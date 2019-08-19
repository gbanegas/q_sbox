/*
 ============================================================================
 Name        : q_sbox.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <quantum.h>

#include "subbytes.h"

#include "subfunctions/inverse.h"
#include "subfunctions/square.h"
#include "subfunctions/multiply.h"


int main(void) {

//	quantum_reg state = quantum_new_qureg(511, 40);
	quantum_reg state = quantum_new_qureg(2, 40);
	quantum_print_qureg(state);
	square(&state,0,0);
	//multiply(&state, 0, 0, 0);
	quantum_print_qureg(state);
	//sub_bytes(&state);

	return EXIT_SUCCESS;
}
