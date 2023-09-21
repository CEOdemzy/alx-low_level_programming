#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds  new node at the beginning
 * @head: node head
 * @str: string to store the node
 * Return: address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;
	unsigned int len = 0;

	while (str[len])
		len++;

	newn = malloc(sizeof(list_t));
	if (!newn)
		return (NULL);

	newn->str = strdup(str);
	newn->len = len;
	newn->next = *head;
	*head = newn;

	return (*head);
}

