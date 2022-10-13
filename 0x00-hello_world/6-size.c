#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf(stderr, "Size of a char: %zu bytes(s)\n", sizeof(char));
	printf(stderr, "Size of an int: %zu bytes(s)\n", sizeof(int));
	printf(stderr, "Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf(stderr, "Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf(stderr, "Size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
