#include "lists.h"
/**
 * sum_listint - return sum of data
 * @head: pointer to first
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
