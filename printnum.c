#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * printnum - Print numbers integer
 * @n: argument
 *
 *
 * Return: int
 */

int printnum(int n)

{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
		count++;
	}
	else
	{
		num = n;
	}
	if (num / 10)
		count += printnum(num / 10) + 1;
	_putchar(num % 10 + '0');
	return (count);
}
