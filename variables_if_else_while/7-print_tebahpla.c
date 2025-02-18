#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letterinverse;

	for (letterinverse = 'a'; letterinverse >= 'z'; letterinverse--)
		putchar(letterinverse);

	putchar ('\n');

	return (0);
}
