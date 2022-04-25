#include "lists.h"


uli hash(uli x);
ht_t *ht_create(void);
entry_t *ht_pair(const uli key, const uli value);
void ht_set(ht_t *hashtable, const uli key,  const uli value);
uli ht_get(ht_t *hashtable, const uli key);

/**
 * print_listint_safe - Prints all the elements of a linked list
 * @head: Head of the linked list
 *
 * Return: Number of nodes (size_t)
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	uli add;
	size_t i = 0;
	ht_t *ht = ht_create();

	if (temp == NULL)
		exit(98);

	while (head != NULL)
	{
		add = (uli) head;
		i++;
		if (add != ht_get(ht, add))
		{
			printf("[%p] %d\n", (void *)head, head->n);
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		ht_set(ht, add, add);
		head = head->next;
	}
	return (i);
}

/**
 * hash - Hash function for the key
 * @x: unsigned long int key
 *
 * Return: hashed key
 */
uli hash(uli x)
{
	x = ((x >> 16) ^ x) * 0x45d9f3b;
	x = ((x >> 16) ^ x) * 0x45d9f3b;
	x = (x >> 16) ^ x;
	x = x % TABLE_SIZE;

	return (x);
}

/**
 * ht_create - Create a hashtable
 * Return: hashtable with all the entries NULL
 */
ht_t *ht_create(void)
{
	int i;
	ht_t *hashtable = malloc(sizeof(ht_t) * 1);

	hashtable->entries = malloc(sizeof(entry_t *) * TABLE_SIZE);

	for (i = 0; i < TABLE_SIZE; i++)
	{
		hashtable->entries[i] = NULL;
	}

	return (hashtable);
}

/**
 * ht_pair - Set the key and value of the table
 * @key: key data
 * @value: Value to be saved
 * Return: Register in the hashtable
 */
entry_t *ht_pair(const uli key, const uli value)
{
	entry_t *entry = malloc(sizeof(entry) * 1);

	entry->key = key;
	entry->value = value;
	entry->next = NULL;

	return (entry);
}

/**
 * ht_set - Set data in the hash table
 * @hashtable: All the hash table
 * @key: key data
 * @value: Value to be saved
 */
void ht_set(ht_t *hashtable, const uli key,  const uli value)
{
	uli slot = hash(key);
	entry_t *entry = hashtable->entries[slot];
	entry_t *prev;

	if (entry == NULL)
	{
		hashtable->entries[slot] = ht_pair(key, value);
		return;
	}

	while (entry != NULL)
	{
		if (entry->key == key)
		{
			entry->value = value;
			return;
		}

		prev = entry;
		entry = prev->next;
	}

	prev->next = ht_pair(key, value);
}

/**
 * ht_get - Get a entry in the hash table
 * @hashtable: hash table data
 * @key: Key data
 * Return: Value of associated to the key
 */
uli ht_get(ht_t *hashtable, const uli key)
{
	uli slot = hash(key);

	entry_t *entry = hashtable->entries[slot];

	if (entry == NULL)
		return (0);

	while (entry != NULL)
	{
		if (entry->key == key)
			return (entry->value);

		entry = entry->next;
	}

	return (0);
}
