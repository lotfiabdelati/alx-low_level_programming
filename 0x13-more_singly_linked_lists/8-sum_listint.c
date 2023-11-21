#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * A linked list.
 * @head: head of A list.
 * Return: sum of All the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
