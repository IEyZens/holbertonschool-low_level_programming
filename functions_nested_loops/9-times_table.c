#include "main.h"
/**
 * times_table - Check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int a, b, resultat;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			resultat = a * b;
		}
	}
}
