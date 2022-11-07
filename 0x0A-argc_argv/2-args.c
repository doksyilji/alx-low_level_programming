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

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
