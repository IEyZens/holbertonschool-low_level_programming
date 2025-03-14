#include "dog.h"

/**
 * _strlen - check the code
 * @str: est un char pointeur
 * Return: valid the code
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - check the code
 * @dest: est un char pointeur
 * @src: est un char pointeur
 * Return: valid the code
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - check the code
 * @name: est un char pointeur
 * @age: est un float
 * @owner: est un char pointeur
 * Return: valid the code
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *a, *b;
	dog_t *ptr;
	int i;

	ptr = (dog_t *)malloc(sizeof(dog_t));

	if (!ptr)
		return (NULL);

	a = (char *)malloc(_strlen(name) + 1);

	if (!a)
	{
		free(ptr);
		return (NULL);
	}

	b = (char *)malloc(_strlen(owner) + 1);

	if (!b)
	{
		free(ptr);
		free(a);
		return (NULL);
	}

	ptr->name = _strcopy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcopy(ptr->owner, owner);

	return (ptr);
}

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
