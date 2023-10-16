#include "main.h"

/**
 * create-file -creates a specific file
 * @filename: filename
 * @text_content: null terminated stirng
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t write2;
ssize_t len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);


for(len = 0; text_content != NULL && text_content[len]; len++)
;
if (!text_content)
text_content = "";

write2 = write(fd, text_content, len);
if (write2 == -1 || write2 != len)
return (-1);

close(fd);
return (1);
}
