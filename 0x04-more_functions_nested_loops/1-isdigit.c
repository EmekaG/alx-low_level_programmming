#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: the digit to be checked out for
 *
 * Return: 1 if number is a digit, otherwise o.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
