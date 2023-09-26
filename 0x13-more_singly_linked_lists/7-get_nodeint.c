#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nth node of listint_t
 * @head: first node in the list
 * @index: index of node to return
 *
 * Return: pointer to node in view, or NULL if not existing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
