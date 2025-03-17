#include "function_pointers.h"
/**
 * array_iterator - check the code
 *
 * @array: est un int pointeur
 * @size: est la taille du tableau
 * @action: est un void pointeur
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
