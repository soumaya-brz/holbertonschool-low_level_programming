#include "main.h"
#include <stddef.h>  /* pour NULL */

/**
 * _strpbrk - search for the first character of s present in accept
 * @s: search string
 * @accept: string containing the characters to search for
 *
 * Return: pointer to the first character found in s,
 *         or NULL if no character is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
return (NULL);
}
