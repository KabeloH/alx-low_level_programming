#include <unistd.h>
/**
 * main - prints out _putchar and a new line \n
 * Return: 0 on success
 */
int _putchar(char a)
{
	a = "_putchar\n";
	return (write(1, a, 9));
}
