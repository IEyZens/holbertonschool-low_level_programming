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

/*On défini struct dog comme étant dog_t afin de faciliter l'appelation*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
