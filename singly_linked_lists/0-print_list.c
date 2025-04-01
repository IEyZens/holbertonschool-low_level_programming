#include "lists.h"

/**
 * print_list - check the code
 * @h: est un point d'une liste constante
 *
 * Return: valid the code
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}

	return (n);
}
