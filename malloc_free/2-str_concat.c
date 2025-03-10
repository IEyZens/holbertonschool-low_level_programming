#include "main.h"
/**
 * str_concat - check the code
 * @s1: est un char pointeur
 * @s2: est un char pointeur
 * Return: valid the code
 */

char *str_concat(char *s1, char *s2)
{
	int size = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2);

	c = (char *)malloc((size + 1) * sizeof(char));

	if (!c)
		return (NULL);

	strcpy(c, s1);

	strcat(c, s2);

	return (c);
}
