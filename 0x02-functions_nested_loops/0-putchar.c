 #include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
