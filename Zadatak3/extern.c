#include <stdio.h>

//Manipulacije sa ZATVORENOM GLOBALNOM promenljivom
//Definisana je i u file1.c i u fajl2.c bez inicijalizacije
//fajl1.c je inicijalizuje, a fajl2.c je ispisuje
//output: Globalna promenljiva ima vrednost: 0
 
int main()
{
	initVar();
	printVar();

    return 0;
}
