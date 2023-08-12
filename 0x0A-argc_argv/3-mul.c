#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument value list
 * Return: zero
 */

int main(int argc, char *argv[])
{
int num1, num2,  mul = 0;

if (argc != 3)
{
printf("ERROR\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 *num2;

printf("%d\n", mul);
return (0);
}
