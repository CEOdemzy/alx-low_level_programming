#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of listint_t
 * @head: point to first element in listint_t
 * @n: data inserted in new element
 *
 * Return: pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn;
	listint_t *temp = *head;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

		while (temp->next)
		temp = temp->next;

	temp->next = newn;

	return (newn);
}
