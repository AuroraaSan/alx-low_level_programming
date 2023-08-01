#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t count = 0;

	slow_ptr = head;
	fast_ptr = head;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			/* Loop detected, break out of the loop */
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			return (count);
		}

		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;
	}

	/* No loop detected, print the entire list */
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	return (count);
}
