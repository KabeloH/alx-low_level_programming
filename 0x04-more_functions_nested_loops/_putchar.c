#include <unistd.h>

/**
 * prints a character out to stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
