#include "lists.h"

void my_Func(void) __attribute__((contructor));

/**
 * my_Func - executes before main
 * Return: void
 */
void my_Func(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
