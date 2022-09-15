#include<stdio.h>

/**
 * main - cause an infinite loop
 * return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{/* i never increaments so it will always be < 10 and print 0*/
		putchar(i);
	}/* include 'i++;' */ 

	printf("Infinite loop avoided! \\o/\n");


	return (0);
}

