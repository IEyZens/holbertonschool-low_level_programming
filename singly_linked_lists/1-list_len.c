#include "lists.h"

/**
 * list_len - check the code
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
