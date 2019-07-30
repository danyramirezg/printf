#include <stdio.h>
#include "holberton.h"

/**
 * printstrlen - Function that prints the string length
 * @arg: The function's argument
 *
 * Return: The string length
 */
int printstrlen(va_list arg)
{
	int i = 0, count = 0;
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
		str  = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		count++;
	}
	return (count);
}
