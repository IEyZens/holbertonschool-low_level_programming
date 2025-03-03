#include "main.h"
/**
 * _memset - prints buffer in hexa
 * @s: est un char pointeur
 * @b: est un char
 * @n: est un int non assigné
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n - 1] = b;
		n--;
	}

	return (s);
}
