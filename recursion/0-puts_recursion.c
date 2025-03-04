#include "main.h"
/**
 * _puts_recursion - check the code
 * @s: est un char pointeur
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
