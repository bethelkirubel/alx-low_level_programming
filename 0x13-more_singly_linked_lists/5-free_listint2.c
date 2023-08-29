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
listint_t **c = head;

if (c != NULL)
{
while (*head != NULL)
{
point = *head;
free(point);
*head = (*head)->next;
}
*c = NULL;
}
}
