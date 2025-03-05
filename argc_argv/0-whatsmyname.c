#include "main.h" /* Inclusion de la bibliothèque "main.h" */
/**
 * main - Prints the name of the program
 * @argc: Argument count (not used)
 * @argv: Argument vector (contains program name)
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argc; /* Indique que argc est volontairement non utilisé */

	/* Affiche le nom du programme (incluant le chemin si présent) */
	printf("%s\n", argv[0]);

	/* Retourne 0 pour indiquer une exécution réussie */
	return (0);
}
