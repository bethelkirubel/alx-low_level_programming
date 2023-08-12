#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument value list
 * Return: zero
 */

int main(int argc, char *argv[])
{
int num1, num2,  mul = 0;

if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

mul = num1 * num2;

printf("%d\n", mul);
}
else
{
printf("ERROR\n");
return (1);
}
return (0);
}
