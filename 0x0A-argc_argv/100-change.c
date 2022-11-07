#include <stdio.h>
#include <stdlib.h>

/**
 *main - Program entry point
 *
 *Description: Prints the minimum number of coins to make change for an amount
 *of money
 *
 *@argc: Number of arguments passed to the program
 *@argv: Pointer to hold an array of the arguments
 *
 *Return: the minimum number of coins needed to make the change for the amount
 *of money required
 */

int main(int argc, char *argv[])
{
	int x = 0, money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money - 25 >= 0)
		{
			money = money - 25;
		}
		else if (money - 10 >= 0)
		{
			money = money - 10;
		}
		else if (money - 5 >= 0)
		{
			money = money - 5;
		}
		else if (money - 2 >= 0)
		{
			money = money - 2;
		}
		else if (money - 1 == 0)
		{
			money = money - 1;
		}
		x++;
	}
	printf("%d\n", x);
	return (0);
}
