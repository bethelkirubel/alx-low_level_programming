#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_t - frees listint_t
 * @head: head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *cat;
while (head != NULL)
{
cat = head;
free(cat);
head = head->next;
}
}
