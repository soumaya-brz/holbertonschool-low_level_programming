#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a character string
 * @str: string to copy
 *
 * Return: pointer to the new string, or NULL if unsuccessful
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc(len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
