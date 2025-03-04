#include "main.h"
/**
 * _sqrt_recursion - check the code
 * @n: est un int
 * @i: est un int
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}

int _sqrt_recursion_helper(int n, int i)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_sqrt_recursion_helper(n, i + 1));
}
