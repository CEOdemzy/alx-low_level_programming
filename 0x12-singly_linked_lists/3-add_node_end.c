#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end list
 * @head: node head
 * @str: node string
 * Return: address of new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn, *tmpr;
	unsigned int x, count = 0;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);
	newn->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		count++;
	newn->len = count;
	newn->next = NULL;
	tmpr = *head;

	if (tmpr == NULL)
		*head = newn;
	else
	{
		while (tmpr->next != NULL)
			tmpr = tmpr->next;
		tmpr->next = newn;
	}
	return (*head);
}

