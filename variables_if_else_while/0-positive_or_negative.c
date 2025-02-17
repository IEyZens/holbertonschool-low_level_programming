#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main permet d'imprimer une chaine de caracteres
 * if / else if / else permettent de poser des conditions
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	return (n);
}
