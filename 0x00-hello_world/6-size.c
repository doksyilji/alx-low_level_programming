#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
size_t achar = sizeof(char);
size_t anint = sizeof(int);
size_t alongint = sizeof(long int);
size_t along2int = sizeof(long long int);
size_t afloat = sizeof(float);
char s1[80];
char s2[80];
char s3[80];
char s4[80];
char s5[80];
sprintf(s1,"Size of a char: %zu bytes(s)\0", achar);
sprintf(s2,"Size of an int: %zu bytes(s)\0", anint);
sprintf(s3,"Size of a long int: %zu bytes(s)\0", alongint);
sprintf(s4,"Size of a long long int: %zu bytes(s)\0", along2int);
sprintf(s5,"Size of a float: %zu bytes(s)\0", afloat);
puts(s1)
puts(s2)
puts(s3)
puts(s4)
puts(s5)
return (0);
}
