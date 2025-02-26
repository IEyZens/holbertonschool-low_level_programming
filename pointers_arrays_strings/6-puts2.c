#include "main.h"
/**
 * puts2 - check the code
 * @str: est un char pointeur
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	if (!str)
		return;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
