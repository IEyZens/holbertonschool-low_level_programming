#include "main.h"
/**
 * _puts - check the code
 * @str: est un char pointeur
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (; *str > 0; str++)
		_putchar(*str);
	_putchar('\n');
}
