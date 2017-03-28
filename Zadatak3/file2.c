#include <stdio.h>

int global_variable; // JAVNA GLOBALNA, nije vise zatvorena

void printVar() {
	printf ("Globalna promenljiva ima vrednost: %d\n", global_variable);
}

