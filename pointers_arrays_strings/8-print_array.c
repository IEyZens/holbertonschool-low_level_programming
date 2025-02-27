#include "main.h"
/**
 * print_array - check the code for
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		return;

	for (i = n; i <= n - 1; i++)
	{
		_putchar(a[i]);
		if (a[i] != '\0')
			printf(", ");

		_putchar('\n');
	}
}
