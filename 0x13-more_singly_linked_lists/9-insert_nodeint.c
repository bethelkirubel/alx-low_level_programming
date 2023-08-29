#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *point = *head;
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;

if (idx == 0)
{
new->next = point;
*head = new;
return (*head);
}
while (idx > 1)
{
point = point->next;
idx--;
if (!point)
{
free(new);
return (NULL);
}
}
new->next = point->next;
point->next = new;
return (new);
}


