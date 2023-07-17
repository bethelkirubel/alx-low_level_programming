#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num1, num2;
for (num1 = '0' ; num1 <= '8'; num1++)
{
	for (num2 = '1' ; num2 <= '9' ; num2++)
{
		putchar(num1);
		putchar(num2);
putchar(',');
putchar(' ');
	while ((num1 = num2) || (num1 > num2))
		continue;
	}
}
putchar('\n');
return (0);
}
