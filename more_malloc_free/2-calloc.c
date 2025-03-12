#include "main.h"
/**
 * void *_calloc - check the code
 * @nmemb: est un int non assigné
 * @size: est un int non assigné
 * Return: valid the code
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc((nmemb * size));

	if (!ptr)
		return (NULL);

	c = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		c[i] = 0;

	return (ptr);

}
