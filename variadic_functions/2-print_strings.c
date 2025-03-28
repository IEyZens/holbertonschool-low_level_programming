#include "variadic_functions.h"
/**
 * print_strings - check the code
 * @separator: est un char pointeur const
 * @n: est un int non assigné const
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);

		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
