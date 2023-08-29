#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the list
 * @head: points to the head
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
listint_t *point;

if  (head == NULL)
return;

while (*head != NULL)
{
point = (*head)->next;
free(*head);
*head = point;
}
*head = NULL;
}
