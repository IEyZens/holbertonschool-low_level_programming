#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: est un double pointeur
 * @n: est un int constant
 *
 * Return: valid the code
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
