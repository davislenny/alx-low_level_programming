#include<stdio.h>
/**
 * main - the entry point
 *
 * description: Print the size of various types of computer a C program runs on
 *
 * return: always 0(success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
	printf("Size of a long int: %d btye(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));

	return (0);
}
