#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list-h list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t lns = 0;

	lns = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		lns++;
	}
	return (lns);
}
