#include "lists.h"

/**
 * get_dnodeint_at_index - return a specific node.
 * @head: pointer to the first element of the list
 * @index: number of node we want to know
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0; 
while (head != NULL)
{
if (i == index)
return (head);
i++;
head = head->next;
}
return (head);
}
