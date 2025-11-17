#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name unsing a function pointer
 * @name: the name to print
 * @f: pointer to the function  that prints the name
 *
 * this function receives a name and a function pointer,
 * and it calls the function pointed to by f to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
