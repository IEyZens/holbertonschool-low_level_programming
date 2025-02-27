#include "main.h"
/**
 * _strcpy - check the code
 * @dest: est un char pointeur
 * @src: est un char pointeur
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';

	return (dest);
}
