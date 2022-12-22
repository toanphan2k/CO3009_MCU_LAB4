/*
 * error.c
 *
 *  Created on: Dec 21, 2022
 *      Author: pmt12
 */
#include "error.h"
#include "globa.h"

uint8_t error_1[] = "ERROR: CMD_NOT_EXISTED\r\n";
uint8_t error_2[] = "\r\nERROR: BUFFER_IS_FULL\r\n";
uint8_t error_3[] = "\r\nERROR: INVALID_INPUT\r\n";

void errorHandle(){
	switch(errState){

	}
}
