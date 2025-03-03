#include "main.h"
/**
 * _strchr - check the code
 *@s: est un char pointeur
 *@c: est un char
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
