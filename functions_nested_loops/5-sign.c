#include "main.h"
/**
 * print_sign - Entry point
 * @n: est un int
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	const char *npositive = "+";
	const char *nzero = "0";
	const char *negative = "-";

	if (n > 0)
	{
		write(1, npositive, 1);
		return (1);
	}
	else if (n == 0)
	{
		write(1, nzero, 1);
		return (0);
	}
	else
	{
		write(1, negative, 1);
		return (-1);
	}
}
