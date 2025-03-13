#ifndef DOG_H
#define DOG_H

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <stddef.h>

/**
 * struct dog - check the code
 * @name: est un char pointeur
 * @age: est un float
 * @owner: est un char pointeur
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
