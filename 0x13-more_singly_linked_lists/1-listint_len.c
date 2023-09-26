#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: pointer to the first element
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
