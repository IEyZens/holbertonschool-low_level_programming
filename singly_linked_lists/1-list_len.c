#include "lists.h"

/**
 * list_len - check the code
 * @h: est un pointeur d'une liste constante
 *
 * Return: e
 */
size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}

	return (e);
}
