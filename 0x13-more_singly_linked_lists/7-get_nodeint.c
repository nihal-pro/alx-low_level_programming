#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 *                          the nth node of a listint_t linked list.
 * @head: pointer to the first node.
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *move_node = NULL;

	move_node = head;
	while (index)
	{
		if (!move_node)
			return (NULL);
		move_node = move_node->next;
		index--;
	}
	return (move_node);
}
