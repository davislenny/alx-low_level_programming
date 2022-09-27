#include "main.h"
/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2-D array
 * @size: matriz size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row, sum1, sum2;

	sum1 = sum2 = 0;

	for (row = 0; row < size; row++)
	{
		sum1 += *(a + (row * size) + row);
		sum2 += *(a + ((row + 1) * size) - row - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
