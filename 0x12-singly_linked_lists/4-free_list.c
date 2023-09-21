#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free  lists-t
 * @head: free lists
 */

void free_list(list_t *head)
{
	list_t *tmpr;

	while (head)
	{
		tmpr = head->next;
		free(head->str);
		free(head);
		head = tmpr;
	}
}
