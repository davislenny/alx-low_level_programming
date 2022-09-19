#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer variable
 * @n: number of array elements
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
		{
			printf("%d", a[i]);
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}
