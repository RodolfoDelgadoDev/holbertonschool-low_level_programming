#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *val;
	hash_node_t *fire;

	if (!ht)
		return (0);
	if (!key || strlen(key) == 0 || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	val = strdup(value);
	if (ht->array[idx] == NULL)
	{
		fire = malloc(sizeof(hash_node_t));
		if (fire == NULL)
			return (0);
		fire->value = val;
		fire->key = (char *)key;
		ht->array[idx] = fire;
		return (1);
	}
	fire = malloc(sizeof(hash_node_t));
	if (fire == NULL)
		return (0);
	fire->value = val;
	fire->key = (char *)key;
	fire->next = ht->array[idx];
	ht->array[idx] = fire;
	return (1);
}
