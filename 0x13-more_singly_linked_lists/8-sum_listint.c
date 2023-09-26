#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data in a listint_t
 * @head: first node in listint_t
 *
 * Return: result of calculation
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
