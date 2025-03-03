#include "main.h"
/**
 * _memcpy - prints buffer in hexa
 * @dest: est un char pointeur
 * @src: est un char pointeur
 * @n: est un int non assigné
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
