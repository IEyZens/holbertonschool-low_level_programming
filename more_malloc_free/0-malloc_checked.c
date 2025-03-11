#include "main.h"
/**
 * @brief
 *
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
