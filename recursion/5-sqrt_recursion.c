#include "main.h"
/**
 * _sqrt_recursion - check the code
 * @n: est un int
 * Return: Always 0.
 */

int _sqrt_recursion(int n, int current)
{
	if (n < 0)
		return (-1);

	if (current * current == n)
		return (current);
	if (current * current > n)
		return (-1);

	return (_sqrt_recursion(n, current + 1));
}
