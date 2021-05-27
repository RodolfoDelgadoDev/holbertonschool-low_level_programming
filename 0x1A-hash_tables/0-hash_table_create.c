#include "hash_tables.h"
/**
 * hash_table_create - create a hash table.
 * @size: size of a hash table
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *fire;
	hash_node_t **nodes;
	unsigned long int i;

	fire = malloc(sizeof(hash_table_t));
	if (fire == NULL)
		return NULL;
	nodes = malloc(sizeof(hash_node_t **) * size);
	if (nodes == NULL)
	{
		free(fire);
		return NULL;
	}
	fire->size = size;
	fire->array = nodes;
	for (i = 0; i < size; i++)
		nodes[i] = NULL;
	return (fire);
}
