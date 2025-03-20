#include "variadic_functions.h"
/**
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int len = 0;
	char *s, *separator = "";

	va_start(args, format);
	while (format && format[len])
	{
		if (format[len] == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (format[len] == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (format[len] == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (format[len] == 's')
		{
			s = va_arg(args, char *);
			if (!s)
				s = "(nil)";
			printf("%s%s", separator, s);
		}

		separator = ", ";
		len++;
	}

	printf("\n");

	va_end(args);
}
