#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: est un double pointeur
 * @idx: est un int non assigné
 * @n: est un int
 *
 * Return: valid the code
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}

	if (i != idx)
		return (NULL);

	if (current == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current->prev;
	new_node->next = current;

	if (current->prev != NULL)
		current->prev->next = new_node;
	else
		*h = new_node;

	current->prev = new_node;

	return (new_node);
}
