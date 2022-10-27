#include "main.h"

/**
 * swap_int - swaps the values of int a and int b
 * @x: first int to swap
 * @y: second int to swap
 *
 * Return: void
 */
void swap_int(int *x, int *y)
{
	int z;

	 z = *x;
	*x = *y;
	*y = z;
}
