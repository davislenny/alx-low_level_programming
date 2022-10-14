#include "3-calc.h"
/**
 * main - check the code
 * @argc: arg count
 * @argv: argument array vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*func)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	funct = get_op_funck(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(98);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", func(a, b));
	return (0);
}
