#include <stdio.h>

/**
 * main - prints all argument it is given in a new line
 * @argc: count arguments
 * @argv: the values of the arguments
 * Return: 0 - Success
 */

int main(int argc, char *argv[])
{
int i = 0;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
