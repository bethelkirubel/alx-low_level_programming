#include "main.h"

/**
 * _strspn - matches bytes with a certain string
 * @s: string
 * @accept: string to be matched
 * Return: number of bytes matched
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
unsigned int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
else if (s[i] != accept[j])
{
break;
}
}
}
return (count);
}
