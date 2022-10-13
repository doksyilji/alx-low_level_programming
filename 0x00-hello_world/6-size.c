#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fprintf("Size of a char: %zu bytes(s)", sizeof(char));
	fprintf("Size of an int: %zu bytes(s)", sizeof(int));
	fprintf("Size of a long int: %zu bytes(s)", sizeof(long int));
	fprintf("Size of a long long int: %zu bytes(s)", sizeof(long long int));
	fprintf("Size of a float: %zu bytes(s)", sizeof(float));
	return (0);
}
