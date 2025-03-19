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

	if (n == 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i > 0 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
