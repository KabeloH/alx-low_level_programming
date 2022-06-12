#include <unistd.h>
/**
 * _printchar - prints out _putchar and a new line \n
 * Return: 0 on success
 *_put char - print a single character
 * Returns: a on success
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
