#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - The function requested, a function that prints the alphabet
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

}
