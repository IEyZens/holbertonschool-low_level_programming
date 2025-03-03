#include "main.h"
/**
 * print_diagsums - check the code
 *@a: est un int pointeur
 *@size: est un int
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int prim = 0;
	int second = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		prim = prim + a[i * size + i];
		second = second + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", prim, second);
}
