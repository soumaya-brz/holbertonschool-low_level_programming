#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: allowed characters
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p;
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;

		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				found = 1
					break;
			}
		}

		if (!found)
		break;

		count++;
		s++;
	}

	return (count);
}
