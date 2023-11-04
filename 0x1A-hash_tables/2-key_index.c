#include "hash_tables.h"

/**
 * key_index - gives the index of key in hash function
 * @size: size of hash table
 * @key: key to the index
 * Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
