#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table
 * @ht: hash table to be deleted
 * Return: Void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
    /* after deleting all elements, delete the head */
	free(head->array);
	free(head);
}
