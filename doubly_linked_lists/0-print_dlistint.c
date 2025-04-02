#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: est un chor pointeur
 *
 * Return: valid the code
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
