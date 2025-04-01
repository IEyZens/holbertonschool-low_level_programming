#include "lists.h"

/**
 * free_list - check the code
 * @head: est un pointeur d'une liste
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
