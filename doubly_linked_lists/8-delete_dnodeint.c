#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 * @head: est un double pointeur
 * @index: est un int non assigné
 *
 * Return: valid the code
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	int len = 0;

	if (head == NULL)
		return (-1);

	while (*head)
	{
		if (index == 0)
		{
			
			free(temp);
		}

		head = (*head)->next;
	}
}
