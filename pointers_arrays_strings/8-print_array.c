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

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;
		printf(", ");
	}

	printf("\n");
}
