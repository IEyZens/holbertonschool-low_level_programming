#include "main.h"
/**
 * factorial - check the code
 *@n: est un int
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1); /*Indiquer une erreur si le nombre est inférieur à 0*/
	else if (n == 0)
		return (1); /*Le factoriel de 0 est 1*/
	else
		return (n * factorial(n - 1));/*Appel récursif pour calculer factoriel*/
}
