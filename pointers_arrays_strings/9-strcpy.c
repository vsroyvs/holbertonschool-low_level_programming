#include "main.h"

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
