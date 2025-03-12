#include "main.h"
/**
 * array_range - check the code
 * @min: est un int
 * @max: est un int
 * Return: valid the code
 *
 */

int *array_range(int min, int max)
{
	int *i;
	int j;

	/*Vérification si min > max*/
	if (min > max)
		return (NULL);

	/*Allocation mémoire pour un tableau de (max - min + 1) éléments*/
	i = (int *)malloc((max - min + 1) * sizeof(int));

	/*Vérification de l'échec d'allocation*/
	if (!i)
		return (NULL);

	/*Remplissage du tableau avec les valeurs de min à max*/
	for (j = 0; j <= (max - min); j++)
		i[j] = min + j;

	/*Retour du tableau créé*/
	return (i);
}
