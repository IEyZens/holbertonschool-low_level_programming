#include <stdio.h>
/**
 * main - main permet d'imprimer une chaine de caracteres
 * Return: 0
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);

	putchar('\n');

	return (0);
}
