#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * printnum - Print numbers integer
 * @arg: argument
 *
 * Return: int
 */

int printnum(va_list arg)

{
	int n = 0;

	n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		printnum(arg);
	_putchar(n % 10 + '0');

	return (n);
}
