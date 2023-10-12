#include "lists.h"

/**
 * sum_dlistint - sum of the values in the list
 * @head: pointer to the head of the list
 * Return: the sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while(head)
	{
		sum += head->n;
		h = h->next;
	}
	return (sum);
}
