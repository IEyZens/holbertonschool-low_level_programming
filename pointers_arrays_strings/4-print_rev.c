#include "main.h"
/**
 * print_rev - check the code
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int len;

	while (s[len] != '\0')
		len++;

	for (i = len; i > 0; i--)
		_putchar(i[s - 1]);
	_putchar('\n');
}
