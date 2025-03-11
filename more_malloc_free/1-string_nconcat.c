#include "main.h"
/**
 * string_nconcat - check the code
 * @s1: est un char pointeur
 * @s2: est un char pointeur
 * @n: est un int non assigné
 * Return: valid the code
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	c = (char *)malloc((len1 + n + 1) * sizeof(char));

	if (!c)
		return (NULL);

	for (i = 0; i < len1; i++)
		c[i] = s1[i];

	for (j = 0; j < n; j++)
		c[i + j] = s2[j];

	c[i + j] = '\0';

	return (c);
}
