#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: est un integer
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n != 98)
			printf(", ");
		_putchar('\n');
	}
}
