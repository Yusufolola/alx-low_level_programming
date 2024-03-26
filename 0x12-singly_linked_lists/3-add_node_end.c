#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * list_len - entry
 * @h pointer to the list
 * @str char to be added
 * Returns: no of elements printed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	size_t nos = 0;

	
	list_t* newnode = malloc(sizeof(list_t));
	if (!newnode)
		return NULL;

	newnode->str = strdup(str);
	if (*head == NULL)
	{
	
		*head = newnode;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;

	for (nos = 0; str[nos]; nos++)
		;
	temp->next = newnode;
	newnode->next = NULL;
	newnode->len = nos;
	newnode->str = strdup(str);

	return (*head);
}
 
