#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht:  hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *temp1;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while ((temp1 = temp) != NULL)
		{
			temp = temp->next;
			free(temp1->key);
			free(temp1->value);
			free(temp1);
		}
	}
	free(ht->array);
	free(ht);
}
