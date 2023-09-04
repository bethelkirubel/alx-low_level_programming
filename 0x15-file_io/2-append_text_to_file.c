#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends
 * @filename: teh file name
 * @text_content: the content
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int r, fd;
int i = 0;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd < 0)
return (-1);

if (text_content)
{
for (i = 0; text_content[i]; i++)
	;
r = write(fd, text_content, i);

if (r != i)
return (-1);
}
close(fd);
return (1);
}
