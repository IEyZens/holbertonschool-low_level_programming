#include "main.h"
/**
 * puts2 - check the code
 * @str: est un char pointeur
 * Return: Always 0.
 */

void puts2(char *str)
{
	if (!str)
		return;

	for (; *str > '\0'; str += 2)
		_putchar(*str);
	_putchar('\n');
}
