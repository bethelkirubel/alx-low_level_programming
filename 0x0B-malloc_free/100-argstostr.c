#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates arguments in the program
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: concatenated program or NULL
 */

char *argstostr(int ac, char **av)
{
char *ra;
int i, j, k, l;
int counter = 0;
int m = 0;

if (ac == 0)
return (NULL);
if (av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
counter++;

}
counter++;
ra = malloc(sizeof(char) * counter);
if (ra == NULL)
return (NULL);

for (k = 0; k < ac; k++)
{
for (l = 0; av[k][l] != '\0'; l++)
{
ra[m] = av[k][l];
m++;
}
ra[m] = '\n';
m++;
}
return (ra);
}
