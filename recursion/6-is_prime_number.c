#include "main.h"
/**
 * is_prime_number - check the code
 *@n: est un int
 * Return: Always 0.
 */

int i = 2;

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	i++;
	return (is_prime_number(n));
}
