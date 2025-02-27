#include "main.h"
/**
 * _atoi - check the code
 * @s: est un char pointeur
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int a = 0, b = 1, c;

	while (*s++)
	{
		a++;
		if (*s == '-')
			b *= -1;
		
		else if (b == '+')
			continue;
	}

	while (a >= 48 && a <= 57)
	{
		c = (a / 10) - '0';
		if (a > (INT_MAX - c) - 10)
			continue;
	}

	return (c * b);
}
