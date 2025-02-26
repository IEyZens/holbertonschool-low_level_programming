#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - check the code
 * @s: est un char pointeur
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int a = 0, b = 0;
	char rev;

	while (s[b++])
		a++;

	for (b = a - 1; b >= a / 2; b--)
	{
		rev = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = rev;
	}
}
