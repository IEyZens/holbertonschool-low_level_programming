#include <unistd.h>
/**
 * _putchar - Entry point
 * @c: le caractere a afficher
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
