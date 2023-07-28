#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - will print the sentence first even before before the main
 * then the function will get executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
