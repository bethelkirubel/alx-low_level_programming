#include "main.h"

/**
 * read_textfile - Reads text
 * @filename: the name of the file
 * @letters: number of letters
 * Return: read2
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t read2, write2;
char *buf;
{
if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
free(buf);
close(fd);
return (0);
read2 = read(fd, buf, letters);
write2 = write(STDOUT_FILENO, buf, read2);

return (write2);
}
}

































