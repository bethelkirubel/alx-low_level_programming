#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = '0'; digit1 < '9'; digit1++)

	{
		for (digit2 = '1'; digit2 <= '9'; digit2++)
		{
			putchar(digit1);
			putchar(digit2);

			if (digit2 <= digit1)
				continue;
			putchar(',');
			putchar(' ');
		}
}
	putchar('\n');
	return (0);
}
