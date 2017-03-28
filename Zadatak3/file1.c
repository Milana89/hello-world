#include <stdio.h>

#include "file3.h" 
#include "prog1.h"

/* Variable defined here */
int global_variable;

//
void initVar(){
	global_variable = 37;    /* Definition checked against declaration */
}

void increment (void){
	global_variable++;
}

void printVar() {
	printf ("Globalna promenljiva ima vrednost: %d\n", global_variable);
}
