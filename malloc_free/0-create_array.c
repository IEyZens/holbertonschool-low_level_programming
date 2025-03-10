#include "main.h"
/**
 * create_array - check the code
 * @size: est un int non assigné
 * @c: est un char
 *
 * Return: valid the code
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	/* Allocation de mémoire */
	array = (char *)malloc(size * sizeof(char));
	/* Vérification de malloc */
	if (!array)
		return (NULL);

	/* Initialisation du tableau */
	for (i = 0; i < size; i++)
		array[i] = c;

	/* Retourne le pointeur vers le tableau */
	return (array);
}
