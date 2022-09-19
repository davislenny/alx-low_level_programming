#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to 1st integer
 * @b: a pointer to 2nd integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;
	int y;
	int temp;

	*a = &x;
	*b = &y;

	temp = *a;
	*a = *b;
	*b = temp;
}
