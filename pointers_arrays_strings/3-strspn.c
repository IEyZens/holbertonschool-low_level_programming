#include "main.h"
/**
 * _strspn - check the code
 *@s: est un char pointeur
 *@accept: est un char pointeur
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i;

	while (s[c] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[c] == accept[i])
				break;
		}

		if (accept[i] == '\0')
			break;

		c++;
	}

	return (c);
}
