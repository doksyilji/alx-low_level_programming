#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void);

int main(void)
{
	char alphabet;
	
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
                _putchar(alphabet);
        }
	
	_putchar("\n");

}
