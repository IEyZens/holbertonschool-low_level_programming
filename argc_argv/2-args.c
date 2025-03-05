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

	/* while permet de parcourir chaque argument dans argv */
	/* La condition (*argv) vérifie si le pointeur pointe vers un argument */
	while (*argv)
	{
		/* Afficher l'argument */
		printf("%s\n", *argv);

		/* Passer à l'argument suivant en incrémentant argv*/
		argv++;
	}

	/* Fin du programme */
	return (0);
}
