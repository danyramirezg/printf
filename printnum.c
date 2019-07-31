#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * printnum - Prints integer numbers
 * @arg: The funcion´s parameter
 *
 * Return: int
 */

int printnum(va_list arg)
{
	int num, i = 1, k = 0;
	unsigned int n;
	char c;

	num = va_arg(arg, int);

	if (num < 0)
	{
		c = '-';
		k = k + write(1, &c, 1);
		n = -num;
	}
	else
		n = num;

	while (n / i >= 10)
		i = i * 10;

	while (i != 0)
	{
		c = n / i + '0';
		k = k + write(1, &c, 1);
		n = n % i;
		i = i / 10;
	}
	return (k);
}
