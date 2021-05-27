#include "hash_tables.h"

/**
 * key_index - unction that gives you the index of a key.
 * @key: the key
 * @size: size of the array
 * Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);
	idx = idx % size;
	return (idx);

}
