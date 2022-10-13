#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char s1[] = sprintf("Size of a char: %zu bytes(s)", sizeof(char));
char s2[] = sprintf("Size of an int: %zu bytes(s)", sizeof(int));
char s3[] = sprintf("Size of a long int: %zu bytes(s)", sizeof(long int));
char s4[] = sprintf("Size of a long long int: %zu bytes(s)", sizeof(long long int));
char s5[] = sprintf("Size of a float: %zu bytes(s)", sizeof(float));
puts(s1)
puts(s2)
puts(s3)
puts(s4)
puts(s5)
return (0);
}
