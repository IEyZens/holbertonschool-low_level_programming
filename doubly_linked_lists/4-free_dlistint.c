#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: est un pointeur
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
