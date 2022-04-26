#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index- returns the nth node of a list.
 * @head: Address of the first node of a list. * @index: The node being searched for.
 * Return: Nth node.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x;
if (head == NULL)
return NULL;
for (x = 0; x < index; x++)
{
head = head->next;
if (head == NULL)
return NULL;
}
return(head);
}
