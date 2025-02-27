#include "main.h"
/**
 * puts_half - check the code
 * @str: est un char pointeur
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int length = 0, i, index;

	while (str[length] != '\0')
		length++;

	if ((length % 2) == 0)
		index = length / 2;
	else
		index = (length + 1) / 2;

	for (i = index; i <= length - 1; i++)
		_putchar(str[i]);

	_putchar('\n');
}
