#include "main.h"
#include <stdlib.h>

/**
 * create_array - create and initializes an array of chars
 * @size: number of elements to allocate
 * @c: initialization character
 *
 * Return: pointer to the initialized array, or NULL if size == 0
 * or if allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
		unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
