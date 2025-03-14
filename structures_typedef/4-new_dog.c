#include "dog.h"
/**
 * new_dog - check the code
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *a, *b;
	dog_t *ptr;

	ptr = (dog_t *)malloc(sizeof(dog_t));

	if (!ptr)
		return (NULL);

	a = (char *)malloc(strlen(name) + 1);

	if (!a)
	{
		free(ptr);
		return (NULL);
	}

	b = (char *)malloc(strlen(owner) + 1);

	if (!b)
	{
		free(ptr);
		free(a);
		return (NULL);
	}

	ptr->name = a;
	ptr->age = age;
	ptr->owner = b;

	return (ptr);
}

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
