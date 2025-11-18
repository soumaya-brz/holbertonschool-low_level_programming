#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: va_list containing the char to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list containing the int to print
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list containing the float to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string or (nil) if NULL
 * @args: va_list containing the string to print
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";

	/* Table associant symbole et fonction */
	printer_t printers[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *printers[j].symbol) /* 1er if */
			{
				printf("%s", separator);
				printers[j].print(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
