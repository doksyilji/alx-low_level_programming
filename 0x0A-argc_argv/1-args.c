#include <stdio.h>
#include <stdlib.h>

/**
 *main - Program entry point
 *
 *Description: Prints the name of the function
 *
 *@argc: Number of arguments passed to the program
 *@argv: Pointer to hold an array of the arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
