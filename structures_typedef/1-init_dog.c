#include "dog.h"
/**
 * init_dog - check the code
 * @d: est un struct dog *d
 * @name: est un char pointeur
 * @age: est un float
 * @owner: est un char pointeur
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
