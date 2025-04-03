#include "lists.h"

/**
 * sum_dlistint - check the code
 * @head: est un pointeur
 *
 * Return: valid the code
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
