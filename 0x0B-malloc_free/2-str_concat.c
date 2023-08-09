#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: concatinated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
char *s3;
unsigned int i = 0;
unsigned int j = 0;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int len3;


if (s1 == NULL)
return ("");
if (s2 == NULL)
return ("");

while (s1[len1])
len1++;
while (s2[len2])
len2++;

len3 = len1 + len2;
s3 = malloc(sizeof(char) * len3 + 1);

if (s3 == NULL)
return (NULL);

while (i < len1)
{
s3[i] = s1[i];
i++;
}
while (i < len3 && j <= len2)
{
s3[i] = s2[j];
i++;
j++;
}
return (s3);
}

