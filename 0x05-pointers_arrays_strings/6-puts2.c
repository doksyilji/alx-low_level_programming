#include "main.h"

/**
 * puts2 - Prints a char out of two in a string.
 * @str: A string containing characters.
 */
void puts2(char *str)
{
	int i, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
