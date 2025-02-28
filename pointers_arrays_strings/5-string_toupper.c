#include "main.h"
/**
 * string_toupper - check the code
 *
 * Return: Always 0.
 */

char *string_toupper(char *str);
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			return (c - 32);
		str[i]++;
	}

	return (str[i]);
}
