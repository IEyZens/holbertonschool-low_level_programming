#include "main.h"
/**
 * _strcat - check the code
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (start);
}
