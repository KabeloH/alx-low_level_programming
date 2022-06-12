#include <unistd.h>
/**
 * main - prints out _putchar and a new line \n
 * Return: 0 on success
 */
int _putchar(char a)
{
	char a = "_putchar\n"
	write(1, a, 9);
	return (0);
}
