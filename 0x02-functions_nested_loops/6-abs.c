#include <stdio.h>
#include "main.h"
/**
 * _abs - A function that computes the absolute balue of an  integar
 * @n: single letter input
 * Return: Always 0 (Success)
*/
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
