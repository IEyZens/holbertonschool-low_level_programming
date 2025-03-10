#include "main.h"
/**
 * _strdup - check the code
 * @str: est un char pointeur
 * Return: valid the code
 */

char *_strdup(char *str)
{
	int size = 0;
	int j;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	c = (char *)malloc((size + 1) * sizeof(char));

	if (!c)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		c[j] = str[j];
	}

	c[size] = '\0';

	return (c);
}
