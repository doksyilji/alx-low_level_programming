#include <stdio.h>
#include <stdlib.h>

/**
 *main - Program entry point
 *
 *Description: Multiplies arguments
 *
 *@argc: Number of arguments passed to the program
 *@argv: Pointer to hold an array of the arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int  i = argc - 1, j = i - 1, res;

	if (i == 2)
	{
		res = atoi(argv[i]) * atoi(argv[j]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
