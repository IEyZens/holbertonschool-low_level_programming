#include "lists.h"
#include "2-add_dnodeint.c"
#include "3-add_dnodeint_end.c"

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
	if (idx == 0)
		return(add_dnodeint);

	if (idx == '\0')
		return (add_dnodeint_end);

	while (h)
	{

	}
}
