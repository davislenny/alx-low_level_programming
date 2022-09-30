#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]), j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);
	return (0);
}
