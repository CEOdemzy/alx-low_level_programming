#include "lists.h"

/**
 * pop_listint - funtion that deletes the head node of a listint_t
 * @head: points to first element in listint_t
 *
 * Return: data in deleted elements that or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}
