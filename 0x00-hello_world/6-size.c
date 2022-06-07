#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of char: %zu bytes\n", sizeof(a));
	printf("Size of int: %zu bytes\n", sizeof(b));
	printf("Size of long: %zu bytes\n", sizeof(c));
	printf("Size of long long: %zu byte\n", sizeof(d));
	printf("Size of float: %zu byte\n", sizeof(e));
	return (0)
}
