#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and exits if unsuccessful
 * @b: number of bytes to allocate
 *
 * Return: pointer to alllocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
