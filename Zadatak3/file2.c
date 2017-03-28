#include <stdio.h>

#include "file3.h"
#include "prog1.h"

extern int global_variable;

void use_it() {
	printf ("Vrednost promenljive global_variable je: %d\n", global_variable++);
}

int main()
{
    use_it();
    global_variable += 25;
    use_it();
    increment ();
    //printf("Increment: %d\n", increment());
    use_it();

    return 0;
}

