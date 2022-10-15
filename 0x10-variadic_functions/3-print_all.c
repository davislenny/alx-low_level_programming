#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_char - prints a char
 * @args: char arguments
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - prints int
 * @args: int arguments
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - prints float type
 * @args: float arguments
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - prints string
 * @args: string argument(s)
 * Return: void
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints al arg types
 * @format: data types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *sep1 = "", *sep2 = ", ";
	int i, j;
	va_list args;

	print_data type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (type[j].c != '\0')
		{
			if (type[j].c == format[i])
			{
				printf("%s", sep1);
				type[j].func(args);
				sep1 = sep2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
