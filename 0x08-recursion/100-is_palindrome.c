#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
int k, i, c = 0;

k = strlen(s);

for (i = 0; i < k / 2; i++)
{
if (s[i] == s[k - i - 1])
c++;
}

if (c == i)
return (1);
else
return (0);
}
