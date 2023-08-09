#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string and can use both malloc and free
 * @str: pointer to string
 * Return: string or NULL
 */

char *_strdup(char *str)
{
char *str2;
unsigned int i = 0;
unsigned int j = 0;

if (str == NULL)
return (NULL);

while (str[i])
i++;

str2 = malloc(sizeof(char) * i + 1);

if (str2 == NULL)
return (NULL);

while (str[j])
{
str2[j] = str[j];
j++;
}
return (str2);
}
