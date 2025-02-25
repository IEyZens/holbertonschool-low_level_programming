#include "main.h"
/**
 * print_triangle - check the code
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int hash, space;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (space = size - hash; space > 0; space--)
				_putchar(' ');

			for (space = 0; space < hash; space++)
				_putchar('#');

			if (hash == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
