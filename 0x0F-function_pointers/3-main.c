#include "3-calc.h"
#include <stdlib.h>
/**
 * main - check the code
 * @argc: arg count
 * @argv: argument array vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", func(a, b));
	return (0);
}
