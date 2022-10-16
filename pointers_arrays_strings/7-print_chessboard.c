#include"main.h"

/**
*print_chessboard - prints chessboard
*@cb: chessboard
*
*/
void print_chessboard(char (*cb)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(cb[i][j]);
			j = j + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
