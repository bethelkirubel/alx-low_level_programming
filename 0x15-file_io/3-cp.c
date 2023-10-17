#include "main.h"

/**
 * error_check - checks if file is error
 * @file_from: file_from
 * @file_to: file_to
 * Return: nothing
 */
void error_check(int file_from, int file_to)
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE");
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
exit(99);
}
}


/**
 * main - a program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument value
 * Return: 0 in success
 */
int main(int argc, char *argv[])
{
int file_from, file_to, error_close;
ssize_t n, write2;
char *buf[1024];
n = 1024;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_check(file_from, file_to);

while (n == 1024)
{
n = read(file_from, buf, 1024);
if (n == -1)
error_check(-1, 0);
write2 = write(file_to, buf, 1024);
if (write2 == -1)
error_check(0, -1);
}

error_close = close(file_from);
if (error_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd file_from");
exit(100);
}

error_close = close(file_to);
if (error_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd file_to");
exit(100);
}
return (0);
}
