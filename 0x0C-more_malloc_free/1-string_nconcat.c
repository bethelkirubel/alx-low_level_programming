#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: string 2 limit to print
 * Return: NULL or th concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *constr;
unsigned int i, len = n;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
len++;

constr = malloc(sizeof(char) * (len + 1));

if (constr == NULL)
return (NULL);

len = 0;
for (i = 0; s1[i]; i++)
constr[len++] = s1[i];
for (i = 0; s2[i] && i <= n; i++)
constr[len++] = s2[i];

constr[len] = '\0';
return (constr);
}
