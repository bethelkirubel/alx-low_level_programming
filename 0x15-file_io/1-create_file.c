#include "main.h"

/**
 * create_file - creates a new file
 * @filename: the filename
 * @text_content: content of the file
 * Return: NULL or 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
int fd, i;
int r;

if (!filename)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
return (-1);

if (!text_content)
text_content = "";

for (i = 0; filename[i]; i++)
;
r = write(fd, text_content, i);

if (r == -1)
return (-1);

close(fd);
return (1);
}

