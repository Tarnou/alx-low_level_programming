#include "main.h"
/**
 * print_chessboard - Print a chessboard.
 * @chessboard: The 2D array representing the chessboard.
 */
void print_chessboard(char chessboard[8][8]) 
{
	int i, j;

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			_putchar(chessboard[i][j]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
