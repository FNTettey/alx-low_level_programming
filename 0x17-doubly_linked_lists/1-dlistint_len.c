#include "lists.h"
/**
 * dlistint_len - gives the length of a linked list
 * @h: first element of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
