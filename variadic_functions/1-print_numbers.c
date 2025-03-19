#include "variadic_functions.h"
/**
 * print_numbers - check the code
 * @separator: est un char pointeur const
 * @n: est un int non assigné const
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int temp;

	if (n == 0)
		return;

	if (separator == NULL)
		printf("%d", n);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, int);

		if (i > 0)
			printf("%s", separator);
		printf("%d", temp);
	}
	va_end(args);

	printf("\n");
}
