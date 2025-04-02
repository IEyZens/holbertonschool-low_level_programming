#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: est un char pointeur
 *
 * Return: valid the code
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
