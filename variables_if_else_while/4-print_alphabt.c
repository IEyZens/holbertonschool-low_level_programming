#include <stdio.h>
/**
 * main - main permet d'imprimer une chaine de caracteres
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' && letter != 'q' && 'e'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar ('\n');

	return (0);
}
