#include "main.h"
/**
 * puts2 - check the code
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	for (; *str > '\0'; str += 2)
		_putchar(*str);
	_putchar('\n');
}
