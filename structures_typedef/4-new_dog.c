#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that returns the length of string
 *
 * @s: value to be examineted
 * Return: value cstr
 */

int _strlen(char *s)
{
	int cstr = 0;

	while (s[cstr])
		cstr++;
	return (cstr);
}

/**
 * *_strcpy - function that copies the string
 *
 * @dest: destination string copy of src
 * @src: source string to be copied
 * Return: value cstr
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (j = 0; src[j] != '\0'; j++)
		;
	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name : 1 element dog's name
 * @age: 2 element dog's age
 * @owner: 3 element owner'name of dog
 * Return: a data structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
