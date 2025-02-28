#include "main.h"
/**
 * _strncpy - check the code
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	if (n <= 0)
		return (start);

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return start;
}
