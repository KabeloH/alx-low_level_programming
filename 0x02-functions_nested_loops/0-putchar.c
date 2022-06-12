#include <unistd.h>
/**
 * main - prints out _putchar and a new line \n
 * Return: 0 on success
 *_put char - print a single character
 * Returns: a on success
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}

int _putchar(char a)
{
	return (write(1, &a, 1));
}
