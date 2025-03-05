#include "main.h"
/**
 * main - Prints the name of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	/* Afficher le nombre d'arguments passées au programme */
	printf("Il y a %d arguments\n", argc);

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("Argument %d : %s\n", i, argv[i]);
	}

	/* Fin du programme */
	return (0);
}
