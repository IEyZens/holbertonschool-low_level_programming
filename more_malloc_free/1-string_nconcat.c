#include "main.h"
/**
 * string_nconcat - check the code
 * @s1: est un char pointeur
 * @s2: est un char pointeur
 * @n: est un int non assigné
 * Return: valid the code
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*Pointeur qui va contenir la chaîne de caractères concaténée*/
	char *c;
	/*Variables pour stocker les longueurs des chaînes s1 et s2 respectivement*/
	/*Variables d'index pour les boucles de copie*/
	unsigned int len1 = 0, len2 = 0, i, j;

	/*Si s1 est NULL, on le remplace par une chaîne vide*/
	if (s1 == NULL)
		s1 = "";

	/*Si s2 est NULL, on le remplace par une chaîne vide*/
	if (s2 == NULL)
		s2 = "";

	/*Cette boucle parcourt s1 caractère par caractère*/
	while (s1[len1] != '\0')
		len1++;

	/*Cette boucle parcourt s2 caractère par caractère*/
	while (s2[len2] != '\0')
		len2++;

	/**
	 * Si n est plus grand que la longueur de s2, on ajuste n pour qu'il soit
	 * égal à la longueur de s2.
	 */
	if (n > len2)
		n = len2;

	/*On alloue dynamiquement de la mémoire pour la nouvelle chaîne c*/
	c = (char *)malloc((len1 + n + 1));

	/*Si l'allocation échoue, la fonction retourne NULL*/
	if (!c)
		return (NULL);

	/*Cette boucle copie chaque caractère de s1 dans c*/
	for (i = 0; i < len1; i++)
		c[i] = s1[i];

	/**
	* Cette boucle copie les premiers n caractères de s2 dans c
	* i + j est i où la position de s1 s'est terminée et j permet de copier les
	* caractères de s2 un par un
	*/
	for (j = 0; j < n; j++)
		c[i + j] = s2[j];

	/**
	 * On ajoute un caractère nul '\0' à la fin de la chaîne concaténée pour
	 * marquer la fin de la chaîne de caractères
	 */
	c[i + j] = '\0';

	/*On retourne le pointeur c*/
	return (c);
}
