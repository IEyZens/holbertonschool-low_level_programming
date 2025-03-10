#include "main.h"
/**
 * str_concat - check the code
 * @s1: est un char pointeur
 * @s2: est un char pointeur
 * Return: valid the code
 */

char *str_concat(char *s1, char *s2)
{
	int size = 0, i = 0, j = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2);

	c = (char *)malloc((size + 1) * sizeof(char));

	if (!c)
		return (NULL);

	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		c[i + j] = s2[j];
		j++;
	}

	c[i + j] = '\0';

	return (c);
}
