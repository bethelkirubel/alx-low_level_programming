#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */

void print_alphabet(void)

{
	char new;

for (new = 'a' ; new <= 'z' ; new++)
{
	_putchar(new);
}

	_putchar('\n');
}
