#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on format
 * @format: list of types of arguments passed
 * 'c' = char, 'i' = int, 'f' = float, 's' = string
 * ...: arguments to print
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
			separator = ", ";
		}
		if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
			separator = ", ";
		}
		if (format[i] == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
			separator = ", ";
		}
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", separator, str);
			separator = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
