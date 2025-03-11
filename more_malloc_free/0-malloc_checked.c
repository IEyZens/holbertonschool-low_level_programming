#include "main.h"
/**
 * malloc_checked - check the code
 * @b: est un int non assigné
 * Return: valid the code
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	/* Allocation de mémoire */
	c = malloc(b);

	/*Vérification de l'échec de malloc*/
	if (c == NULL)
		/*Arrêt du programme avec le code 98*/
		exit(98);

	/*Retourne le pointeur alloué*/
	return (c);
}
