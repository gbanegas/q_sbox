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

int main(void) {

	quantum_reg state = quantum_new_qureg(0, 40);
	sub_bytes(state);

	return EXIT_SUCCESS;
}
