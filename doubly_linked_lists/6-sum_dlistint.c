#include "lists.h"

/**
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		add = add + head->n;

		head = head->next;
	}

	return (add);
}
