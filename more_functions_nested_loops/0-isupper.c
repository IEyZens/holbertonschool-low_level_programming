#include "main.h"
/**
 * _isupper - check the code.
 * @c: est un int
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
