#include "hash_tables.h"
/**
 * add_node_hash - adds node at beginning of hash at given index
 * @h: head of hash linked list
 * @key: key of the hash
 * @value: value to store
 * Return: head of the hash
 */
hash_node_t *add_node_hash(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *temp;

	temp = *h;
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*h);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (NULL);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *h;
	*h = temp;
	return (*h);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int keyy_index;

	if (ht == NULL)
		return (0);
	if (key == NULL ||  *key == '\0')
		return (0);
	keyy_index = key_index((unsigned char *)key, ht->size);
	if (add_node_hash(&(ht->array[keyy_index]), key, value) == NULL)
		return (0);
	return (1);
}
