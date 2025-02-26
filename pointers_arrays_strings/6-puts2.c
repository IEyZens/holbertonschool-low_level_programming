#include "main.h"
/**
 * puts2 - check the code
 * @str: est un char pointeur
 * Return: Always 0.
 */

void puts2(char *str)
{
	for (; *str > '\0'; str++)
		_putchar(*str);
	putchar('\n');
}
