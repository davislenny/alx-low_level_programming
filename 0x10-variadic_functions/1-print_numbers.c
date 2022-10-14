#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string between numbers
 * @n: number of integers
 * @...: argument integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	while (i--)
		printf("%d%s", va_arg(args, int),
				i ? (separator ? separator : " ") : "\n");
	va_end(args);
	printf("\n");
}
