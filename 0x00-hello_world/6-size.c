#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("\"Size of a char: %zu bytes(s)", sizeof(char));
	puts("\"Size of an int: %zu bytes(s)", sizeof(int));
	puts("\"Size of a long int: %zu bytes(s)", sizeof(long int));
	puts("\"Size of a long long int: %zu bytes(s)", sizeof(long long int));
	puts("\"Size of a float: %zu bytes(s)", sizeof(float));
	return (0);
}
