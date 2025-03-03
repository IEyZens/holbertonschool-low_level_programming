#include "main.h"
/**
 * _strbrk - check the code
 *@s: est un char pointeur
 *@accept: est un char pointeur
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}

			j++;
		}

		i++;
	}

	return (NULL);
}
