#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print alphabet uppercase
 * Return: Zero value
 */

int main(void)
{
	char c;

	for (c = 'A' ; c <= 'Z'; c++)
		putchar(c);
	putchar ('\n');
		return (0);
}
