#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 * @n: est un int non assigné const
 * Return: valid the code
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int result = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		result += va_arg(args, int);

	return (result);
}
