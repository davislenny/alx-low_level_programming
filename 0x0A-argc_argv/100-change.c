#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, amnt, cnt = 0;
	int cVal[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amnt = atoi(argv[1]);
	if (amnt < 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		if (amnt / cVal[i])
		{
			cnt += amnt / cVal[i];
			amnt %= cVal[i];
		}
	}
	printf("%d\n", cnt);
	return (0);
}
