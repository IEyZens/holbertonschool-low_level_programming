#include "main.h"
/**
 * factorial - check the code
 *@n: est un int
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0) /* Si n est négatif, retourner -1 pour indiquer une erreur*/
	{
		return (-1);
	}
	else if (n == 0) /*Si n est égal à 0, retourner 1(le factoriel de 0 est 1)*/
	{
		return (1);
	}
	else
	{
		int result = 1; /*Initialiser le résultat à 1*/
		int i = 1; /*Initialiser i à 1, car on commence à multiplier par 1*/

		while (i <= n) /*La boucle s'exécute jusqu'à ce que i atteigne n*/
		{
			result = result * i; /*Multiplier le résultat actuel par i*/
			i++; /*Incrémenter i pour la prochaine itération*/
		}

		return (result); /*Retourner le résultat final */
	}
}
