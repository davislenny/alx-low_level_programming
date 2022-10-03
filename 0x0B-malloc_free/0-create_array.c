#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes
 * it with a specific char
 * @size: array size
 * @c: the character to initialize
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	a = malloc(size * sizeof(char));

	if (size == 0 || a == NULL)
		return (NULL);
	while (size--)
		a[size] = c;
	return (a);
}
