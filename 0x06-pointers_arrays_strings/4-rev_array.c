#include "main.h"
/**
 * reverse_array - Reverses an array of integers
 * @a: the array
 * @n: size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	n -= 1;
	i = 0;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++, n--;
	}
}
