#include "main.h"

/**
 * read_textfile - reads the file and writes the file and the number of letters
 * @filename: the file
 * @letters: the size of the file
 * Return: the whole file and the number of letters or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nwr, nrd;
char *buf;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buf = malloc(sizeof(char) * (letters));

if (!buf)
return (0);

nrd = read(fd, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);

close(fd);
free(buf);

return (nwr);
}

