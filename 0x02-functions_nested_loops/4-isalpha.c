#include <stdio.h>
#include "main.h"
/**
 * _isalpha - A function that checkes for alphabetcharacter
 * @c: single letter input
 * Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
