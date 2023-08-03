#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)

{
char c;
int i,len = 0,len1;

while (s[i] != '\0')
{
i++;
}

len1 = len - 1;

for (i = 0; i >  len / 2; i++)
{
c = s[i];
s[i] = s[len1];
s[len1 --] = c;
}
putchar('\n');
}
