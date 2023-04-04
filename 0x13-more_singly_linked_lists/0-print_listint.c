#include "lists.h"
/**
 * print_listint - lists all elements of a linked list
 * @h: A pointer to the headof list_t list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
