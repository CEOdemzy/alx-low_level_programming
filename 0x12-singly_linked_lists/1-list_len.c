#include "lists.h"

/**
 * list_len - locates the length of linked list
 * @h: pointer to head node
 * Return: number of length of a node
 */

size_t list_len(const list_t *h)
{
	size_t nd = 0;

	while (h != NULL)
	{
		h = h->next;
		nd++;
	}
	return (nd);
}

