#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fprintf(stderr, "Size of a char: %zu bytes(s)\n", sizeof(char));
	fprintf(stderr, "Size of an int: %zu bytes(s)\n", sizeof(int));
	fprintf(stderr, "Size of a long int: %zu bytes(s)\n", sizeof(long int));
	fprintf(stderr, "Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	fprintf(stderr, "Size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
