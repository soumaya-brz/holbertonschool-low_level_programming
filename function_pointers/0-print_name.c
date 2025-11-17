#include "function_pointers.h"
/**
 * print_name - prints a name using a given function
 * @name: the name to print
 * @f: pointer to a function that takes a string as parameter and
 * return void
 *
 * this function calls the function pointed to by f,
 * passing the string name to it.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
