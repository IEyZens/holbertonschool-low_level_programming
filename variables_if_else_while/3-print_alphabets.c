#include <stdio.h>
/**
 * main - main permet d'imprimer une chaine de caracteres
 * Return: 0
 */

int main(void)
{
	char letterlower;
	char letterupper;

	for (letterlower = 'a'; letterlower <= 'z'; letterlower++)
		putchar(letterlower);

	for (letterupper = 'A'; letterupper <= 'Z'; letterupper++)
		putchar (letterupper);

	putchar('\n');

	return (0);
}
