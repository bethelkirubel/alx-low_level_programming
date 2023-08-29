#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums up the list intigers
 * @head: head of the node
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
int sum;
if (head != NULL)
{
for (sum = 0; head; head = head->next)
sum += head->n;
return (sum);
}
else
return (0);
}


