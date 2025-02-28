#include "main.h"
/**
 * _strncat - check the code
 * @dest: est un char pointeur
 * @src: est un char pointeur
 * @n: est un int
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *start = dest;

	/* Trouver la fin de la chaine de caracteres */
	while (*dest != '\0')
		dest++;

	/* Copier au maximum n caracteres de src dans dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = src[i]; /* Copie du caractere */
		dest++; /* Avance dans dest */
	}

	/* Ajout du caractere null a la fin */
	*dest = '\0';

	return (start); /* Retourne le debut de la chaine modifiee */
}
