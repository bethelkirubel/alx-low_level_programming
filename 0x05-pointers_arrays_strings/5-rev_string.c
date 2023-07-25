#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * rev_string - reverse a string s.
 * @s: string to reverse.
 *
 * Return: nothing
 */

void rev_string(char *s)
{
char c;
size_t len = strlen(s) - 1;
size_t k = len;
size_t i;

for (i = 0; i < len; i++)
{
c = s[k];
s[k] = s[i];
s[i] = c;
k--;

if (k == len / 2)
{
	break;
}
}
}
