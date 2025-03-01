#include "main.h"
/**
 * leet - check the code for
 * @str: est un char pointeur
 * Return: Always 0.
 */

char *leet(char *str)
{
	char replace[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char letters_upper[] = {'A', 'E', 'O', 'T', 'L'};
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == letters_upper[j])
			{
				str[i] = replace[j];
			}
		}
		i++;
	}

	return (str[i]);
}
