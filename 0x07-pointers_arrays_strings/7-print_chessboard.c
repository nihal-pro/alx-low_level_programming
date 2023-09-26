#include "main.h"

/**
 * print_chessboard - Prints a chessboard repr by two-dimensional array
 * @s: The two-dimensional array representing the chessboard
 */
void print_chessboard(char (*s)[8])
{
	int j, i;

	for (j = 0; j < 8; j++)
	{
	for (i = 0; i < 8; i++)
	{
	_putchar(s[j][i]);
	}
	_putchar('\n');
	}
}
