#include "main.h"
/**
 *print_chessboard - prints chessboard from 2D array
 *@a: 2D array
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col = col + 1;
		}
		row = row + 1;
		_putchar('\n');
	}
}
