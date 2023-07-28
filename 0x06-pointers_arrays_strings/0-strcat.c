#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

 /**
  *_strcat - concatenates  the string pointed to by @src to
  * the end of the string pointed to by i@dest
  *@src: the string that is appended
  *@dest: the string which src appends upon
  *return: dest
  */

char *_strcat(char *dest, char *src)
{
size_t dest_len = 0, i = 0;

while (dest[i++])
dest_len++;

for (i = 0; src[i]; i++)
{
dest[dest_len++] = src[i];
}
return (dest);
}
