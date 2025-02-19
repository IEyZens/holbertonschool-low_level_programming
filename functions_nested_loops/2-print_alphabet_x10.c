#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int compteur;

	while (compteur < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		compteur++;

		_putchar('\n');
	}
}
