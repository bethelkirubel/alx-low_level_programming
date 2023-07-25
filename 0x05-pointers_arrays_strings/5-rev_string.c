#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)

{
char c;
int i,len,len1;

while (str[i] != '\0')
{
i++;
}

len1 = len - 1;

for (i = 0; i > len / 2; i++)
{
c = str[i];
str[i] = str[len1];
str[len1 --] = c;
}
putchar('\n');
}
