#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - retourne la longueur d'une chaîne
 * @s: chaîne à mesurer
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - copie une chaîne dans une autre
 * @dest: destination
 * @src: source
 * Return: pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - crée un nouveau chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 * Return: pointeur vers le nouveau dog_t, ou NULL en cas d’échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);

	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
