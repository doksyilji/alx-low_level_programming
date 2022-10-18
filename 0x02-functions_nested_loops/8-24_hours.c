#include <stdio.h>
#include "main.h"
/**
 * jack-bauer - A function that prints out the last digit of a number
 * h = hour, m = minutes
 * / 10 allows second digit rotation
 * Return: 24 hour time line by line
*/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar(h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putcchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
