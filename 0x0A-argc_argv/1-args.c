#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 *
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
(void)argv;
for (i = 0; i <= argc; i++)
{}
printf("%d\n", i - 2);

return (0);
}

