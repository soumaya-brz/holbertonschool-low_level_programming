#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: the array of integers
 * @size: the number of elements in the array
 * @action: pointer to the function to apply to each element
 *
 * if array or action is NULL, the function does nothing.
 * each element of the array is passed to the function pointed to by action.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
