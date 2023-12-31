#include "lists.h"

/**
 * free_listint -function that frees a linstint_t
 * @head: free listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
