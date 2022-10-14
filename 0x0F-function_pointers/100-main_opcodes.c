#include "function_pointers.h"
#include <stdlib.h>
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *pr = (char *)main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i--)
		printf("%02hhx%s", *pr++, i ? " " : "\n");
	return (0);
}
