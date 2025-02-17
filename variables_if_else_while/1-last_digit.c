#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main permet d'imprimer une chaine de caracteres
 * if / else if permettent de poser des conditions
 * Return: 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d and is 0\n", n);
	else if (n < 6 && n != 0)
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}
