#include "main.h"
/**
 * swap_int - check the code
 * @a: est un int pointeur
 * @b: est un int pointeur
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
