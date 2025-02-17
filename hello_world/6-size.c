#include <stdio.h>
/**
 * main - main permet d'imprimer une chaine de caracteres
 * Return: 0
 */

int main(void)
{
	printf("Taille d'un char: %lu byte(s)\n", sizeof(char));
	printf("Taille d'un short: %lu byte(s)\n", sizeof(short));
	       printf("Taille d'un int: %lu byte(s)\n", sizeof(int));
	       printf("Taille d'un long int: %lu byte(s)\n", sizeof(long int));
	       printf("Taille d'un long long int: %lu byte(s)\n", sizeof(long long int));
	       printf("Taille d'un float: %lu byte(s)\n", sizeof(float));
	       return (0);
}
