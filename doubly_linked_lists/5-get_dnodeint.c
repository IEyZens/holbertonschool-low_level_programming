#include "lists.h"

/**
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;

	while (head)
	{
		if (len == index)
			return (head);
		else
			head = head->next;

		len++;
	}

	return (NULL);
}
