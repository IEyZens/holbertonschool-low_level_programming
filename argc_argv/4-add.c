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
	int somme = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		somme += atoi(argv[i]);
	}

	printf("%d\n", somme);
	return (0);
}
