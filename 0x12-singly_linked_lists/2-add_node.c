#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at beginning
 * @head: double pointer list_t list
 * @str: new string to store
 * Return: address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;
	unsigned int x, count = 0;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);
	newn->str = strdup(str);
	for (x = 0; str[x] != '\n'; x++)
		count++;
	newn->len = count;
	newn->next = *head;
	*head = newn;

	return (*head);
}

