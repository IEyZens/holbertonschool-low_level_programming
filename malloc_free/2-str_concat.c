#include "main.h"
/**
 * str_concat - check the code
 * @s1: est un char pointeur
 * @s2: est un char pointeur
 * Return: valid the code
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k;
	char *c;

	/* Remplacer chaque chaîne NULL par une chaîne vide */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculer la taille totale de la chaîne résultante sans utiliser strlen */
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	/* Allouer de la mémoire pour la chaîne concaténée + 1 pour '\0' */
	c = (char *)malloc((i + j + 1) * sizeof(char));

	/* Si l'allocation échoue, retourner NULL */
	if (!c)
		return (NULL);

	/* Copier les caractères de s1 dans c */
	for (k = 0; k < i; k++)
		c[k] = s1[k];

	/* Copier les caractères de s2 dans c */
	for (k = 0; k < j; k++)
		c[i + k] = s2[k];

	/* Ajouter le caractère de fin de chaîne */
	c[i + j] = '\0';

	return (c);
}
