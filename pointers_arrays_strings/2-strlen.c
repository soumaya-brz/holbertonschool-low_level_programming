#include "main.h"
/**
 * int _strlen - returns the length of a string
 * @s: pointeur vers la chaîne
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
