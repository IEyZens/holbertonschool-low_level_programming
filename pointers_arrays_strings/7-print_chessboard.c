#include "main.h"
/**
 * print_chessboard - check the code
 *@a: est un char pointeur tableau
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int l;
	int c;

	for (l = 0; l < 8; l++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c", a[l][c]);
		}

		printf("\n");
	}
}
