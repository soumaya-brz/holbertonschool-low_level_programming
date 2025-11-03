#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: pointer to the memory area to be filled
 * @b: value to be placed in each byte
 * @n: number of bytes to be filled
 *
 * Return:  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
return (s);
}
