#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints out  changes
 * @argc: count arguments
 * @argv: list argument value
 * Return: zero
 */

int main(int argc, char *argv[])
{
int cent, ncent = 0;

if (argc == 1 || argc > 2)
{
printf("ERROR\n");
return (1);
}
cent = atoi(argv[1]);

while (cent > 0)
{
if (cent >= 25)
cent -= 25;
else if (cent >= 10)
cent -= 10;
else if (cent >= 5)
cent -= 5;
else if (cent >= 2)
cent -= 2;
else if (cent >= 1)
cent -= 1;

ncent += 1;
}
printf("%d\n", ncent);
return (0);
}
