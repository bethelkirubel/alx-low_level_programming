#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Prints all the numbers of base 16 in lowercase.
 *
 * Return: Zero value
 */

int main(void)
{
	char c;
int num;

	for (num = '0' ; num <= '9'; num++)
		putchar(num);
	for (c = 'a' ; c <= 'f'; c++)
		putchar(c);
	putchar ('\n');
		return (0);
}
