#include "main.h"

/**
 * print_chessboard - Display a checssboard
 *
 * @a: The board
 *
 **/
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;
	int size = sizeof(a);

	for ( ; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
