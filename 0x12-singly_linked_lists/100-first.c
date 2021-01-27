#include <stdio.h>
#include <stdlib.h>
void beforeMain(void) __attribute__ ((constructor));

/**
* beforeMain - do something before main
*/
void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
