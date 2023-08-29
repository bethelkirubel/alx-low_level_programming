#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the node and lists the elements inside
 * @head: had of the node
 * Return: the elements inside the deleted node
 *
 */

int pop_listint(listint_t **head)
{
listint_t *point;
int i;

if (!head || !*head)
return (0);

else
{
i = (*head)->n;
point = (*head)->next;
free(*head);
*head = point;
}
return (i);
}
