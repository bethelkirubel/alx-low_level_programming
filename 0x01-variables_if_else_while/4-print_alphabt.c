#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print alphabet lowercase
 * Return: Zero value
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
{
	if (c != 'q' &&  c != 'e')
		putchar(c);
}
putchar('\n');
return (0);
}
