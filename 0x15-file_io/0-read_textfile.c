#include "main.h"

/**
 *
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

buf = malloc(sizeof(char) *letters);
if (buf == NULL)
{
close (fd);
return (0);
}
read2 = read(fd, buf, letters);
if (read2 == -1)
{
free (buf);
close (fd);
return (0);
}

write2 = write(STDOUT_FILENO, buf, read2);
if (write2 == -1)
{
free (buf);
close (fd);
return (0);
}
return (write2);
}
}

































