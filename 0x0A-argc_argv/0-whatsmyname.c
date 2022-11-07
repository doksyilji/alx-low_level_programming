#include <stdio.h>
#include <stdlib.h>

/**
*main - Program entry point
*
*Description: Just to print the name of the function
*
*@argc: Number of arguments passed to the program
*@argv: Pointer that holds an array of the arguments
*
*Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
