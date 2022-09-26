#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: A 2-D array
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[r][c]);
		_putchar('\n');
	}
}
