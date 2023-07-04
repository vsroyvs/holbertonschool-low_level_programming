#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that free memory space of type struct dog
 * @d : pointer to struct dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		d = malloc(sizeof(dog_t));
	free(d);
}
