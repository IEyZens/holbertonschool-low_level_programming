#include "main.h"
/**
 * main - Prints the name of the program
 * @argc: Argument count (contains arguments number)
 * @argv: Argument vector (not used)
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	/* Indique que argv est volontairement non utilisé */
	(void)argv;

	/* Affiche le nombre d'arguments, y compris le nom du programme */
	printf("%d\n", argc);

	/* Retourne 0 pour indiquer une exécution réussie */
	return (0);
}
