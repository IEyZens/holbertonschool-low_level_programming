#include "dog.h"
#include "4-new_dog.c"

/**
 * free_dog - check the code
 * @d: est un struct dog_t pointeur
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
