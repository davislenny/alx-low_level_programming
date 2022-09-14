
#include <unistd.h>

/**
 * _putcher - Print c to stdio
 *
 * Return: 1 for success
 * return: -1 for on error
 */
 
int _putchar(char c)

{
	return (write(1, &c, 1));
}
