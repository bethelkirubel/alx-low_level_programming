#include <unistd.h>

/**
 * _putchar: writes a character c to stdout
 * @c:The acahtacter to print
 * Return: on successs 1
 * on error -1 is returned and errorno is set appropriately
 */

int _putchar(char c)

{
	return (write(1,&c,1));
}
