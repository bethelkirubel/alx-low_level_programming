#include "main.h"

/**
 * _strpbrk - function that prints matching part of the string
 * @s: string
 * @accept:string with to be matched bytes
 * Return: string excluding unmatching bytes
 */

char *_strpbrk(char *s, char *accept)
{
int j;

while (*s != '\0')
{
for (j = 0; accept[j] != '\0'; )
{
if (*s == accept[j])
{
return (s);
}
j++;
}
s++;
}
return (0);
}
