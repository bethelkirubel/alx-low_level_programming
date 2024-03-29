#include "main.h"

/**
 * append_text_to_file - program appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int len;
ssize_t write2;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (text_content)
{
for (len = 0; text_content[len]; len++)
;

write2 = write(fd, text_content, len);

if (write2 == -1)
return (-1);
}
close(fd);
return (1);
}
