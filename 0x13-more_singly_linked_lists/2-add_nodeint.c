#include "lists.h"

/**
 * add_nodeint -  function that adds new node at beginning of listint_t
 * @head: points to first node in list
 * @n: data in new node
 *
 * Return: pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);

	newn->n = n;
	newn->next = *head;
	*head = newn;

	return (newn);
}
