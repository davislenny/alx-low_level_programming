#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: the array
 * @n: size of the array
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
