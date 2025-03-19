#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 1;

	if (n == 0)
		return (0);

	return (sum + n);
}
