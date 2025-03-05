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

	/*Déclaration des variables au début de la fonction*/
	int num1;
	int num2;
	int result;

	/* Vérification du nombre d'arguments */
	if (argc != 3)
	{
		/*Ajout du '\n' pour passer à la ligne après l'erreur*/
		printf("Error\n");
		return (1);
	}

	/*Conversion des arguments en entiers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/*Affichage des arguments*/
	printf("Argument 1 : %s\n", argv[1]);
	printf("Argument 2 : %s\n", argv[2]);

	/*Multiplication des deux nombres*/
	result = num1 * num2;

	/*Affichage du résultat*/
	printf("%d\n", result);


	return (0);
}
