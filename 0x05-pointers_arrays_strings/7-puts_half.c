#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half -print half of the string
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
int len, n, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (n = (len - 1) / 2; n < len - 1 ; n++)
		{
			putchar(str[n + 1]);
		}
	}
	putchar('\n');
}
