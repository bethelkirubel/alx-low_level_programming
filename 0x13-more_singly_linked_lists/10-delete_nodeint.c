#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes specific node
 * @head: head of the list
 * @index: node that should be deleted
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *sub;
unsigned int i;

if (!head || !*head)
return (-1);
current = *head;
if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}
for (i = 0; i <= (index - 1); i++)
{
current = current->next;
if (!current)
return (-1);
}
sub = current->next;
current->next = sub->next;
free(sub);
return (1);
}
