#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - A function that prints out the last digit of a number
 * @n: single letter input
 * Return: The Calue of last digit
*/
int print_last_digit(int n)
{
	int no;

	no = n % 10;

	if (no < 0)
	{
		no = (-1 * no);
	}
	_putchar(no + '0');

	return (no);
}
