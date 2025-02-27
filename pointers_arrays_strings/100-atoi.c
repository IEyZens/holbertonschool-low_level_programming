#include "main.h"
/**
 * _atoi - check the code
 * @s: est un char pointeur
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int a = 0, b = 1;

	do
	{
		if (*s == '-')
			b *= -1;

		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');

		else if (a > 0)
			break;

	}

	while (*s++);

	return (a * b);
}
