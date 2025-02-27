#include "main.h"
/**
 * print_array - check the code for
 * @a: est un int pointeur
 * @n: est un int
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		return;

	for (i = 0; i <= n - 1; i++)
	{
		_putchar(a[i]);
		if (a[i] != '\0')
			printf(", ");

		_putchar('\n');
	}
}
