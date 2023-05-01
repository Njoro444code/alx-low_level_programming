#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node at a particular index in a linked list
 * @head: the first node declared in the linked list
 * @index: index of the node to be returned
 *
 * Return: the indexed node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
