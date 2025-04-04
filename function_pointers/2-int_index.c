#include "function_pointers.h"
/**
 * int_index - check the code
 * @array: est un int pointeur
 * @size: est un int
 * @cmp: est un int pointeur
 *
 * Return: valid the code
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}

	return (-1);
}
