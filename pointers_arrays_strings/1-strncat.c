#include "main.h"
/**
 * _strncat - appends at most n bytes from src to the end of dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of type to append
 *
 * Return: the pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}	
