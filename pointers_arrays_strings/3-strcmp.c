#include "main.h"
/**
 * _strcmp - check the code
 * @s1: est un char pointeur
 * @s2: est un char pointeur
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
