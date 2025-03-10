#include "main.h"
/**
 * str_concat - check the code
 * @s1: est un char pointeur
 * @s2: est un char pointeur
 * Return: valid the code
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k;
	char *c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	c = (char *)malloc((i + j + 1) * sizeof(char));

	if (!c)
		return (NULL);

	for (k = 0; k < i; k++)
		c[k] = s1[k];

	for (k = 0; k < j; k++)
		c[i + k] = s2[k];

	c[i + j] = '\0';

	return (c);
}
