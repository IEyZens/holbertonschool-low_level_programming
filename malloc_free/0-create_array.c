#include "main.h"
/**
 * create_array - check the code
 * @size: est un int non assigné
 * @c: est un char
 *
 * Return 0 - valid the code
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char* array;

	array = (char *)malloc(size * sizeof(char));
	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
