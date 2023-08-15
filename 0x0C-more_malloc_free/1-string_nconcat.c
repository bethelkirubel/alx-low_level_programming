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
unsigned int i, j, k, len  = 0;

if (s1 == NULL)
printf("");
if (s2 == NULL)
printf("");

while (s1[j])
j++;
while (s2[k])
k++;

len = j + k;
constr = malloc(sizeof(char) *len + 1);

if (constr == NULL)
printf("");

for (i = 0; s1[i]; i++)
concat[len++] = s1 [i];
for (i = 0; s2[i] && i <= n; i++)
concat[len++] =s2 [i];

concat != '\0';
return (concat);
}
