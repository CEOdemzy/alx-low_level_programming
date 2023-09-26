#include "lists.h"

/**
 * listint_len - function that returns number of elements in linked listint_t
 * @h: transverses linked list of listint_t
 * Return: node numbers
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
