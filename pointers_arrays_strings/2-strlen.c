#include "main.h"
/**
 * _strlen - check the code
 * @s: est un char pointeur
 * Return: Always 0.
 */

int _strlen(char *s)
{
	size_t lenght = 0;

	while (*s++)
		lenght++;

	return (lenght);
}
