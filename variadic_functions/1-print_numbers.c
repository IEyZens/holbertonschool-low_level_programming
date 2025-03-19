#include "variadic_functions.h"
/**
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int temp;

	if (n == 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, int);

		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", temp);
	}
	va_end(args);

	printf("\n");
}
