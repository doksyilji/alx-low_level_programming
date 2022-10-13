#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
size_t char = sizeof(char);
size_t anint = sizeof(int);
size_t alongint = sizeof(long int);
size_t along2int = sizeof(long long int);
size_t afloat = sizeof(float);
char s1[] = sprintf("Size of a char: %zu bytes(s)", achar);
char s2[] = sprintf("Size of an int: %zu bytes(s)", anint);
char s3[] = sprintf("Size of a long int: %zu bytes(s)", alongint);
char s4[] = sprintf("Size of a long long int: %zu bytes(s)", along2int);
char s5[] = sprintf("Size of a float: %zu bytes(s)", afloat);
puts(s1)
puts(s2)
puts(s3)
puts(s4)
puts(s5)
return (0);
}
