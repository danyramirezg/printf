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

int printnum(va_list arg)
{
	int num, i = 1, count = 0;
	unsigned int n;
	char c;

	num = va_arg(arg, int);

	if (num < 0)
	{
		c = '-';
		count = count + write(1, &c, 1);
		n = -num;
	}
	else
		n = num;

	while (n / i > 9)
		i *= 10;

	while (i != 0)
	{
		c = n / i + '0';
		count = count + write(1, &c, 1);
		n = n % i;
		i = i / 10;
	}
	return (count);
}
