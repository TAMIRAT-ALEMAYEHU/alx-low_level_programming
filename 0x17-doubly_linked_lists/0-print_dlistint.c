#include "lists.h"

**
 * pint_dlistint - Pints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Retun: The numbe of nodes in the list.
 *
size_t pint_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		pintf("%d\n", h->n);
		h = h->next;
	}

	etun (nodes);
}
