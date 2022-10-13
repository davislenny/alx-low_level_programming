#include "main.h"
/**
 * print_name - prints name
 * @name: the name
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
