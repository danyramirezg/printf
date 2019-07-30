#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - Function that produces output according to a f
 * @format: Is a character string
 *_p
 * Return: The integer written
 */

int _printf(const char *format, ...)
{
	int m = 0;
	va_list arg;

	va_start(arg, format);

		if (format == 0)
			return (-1);

		m = switcher(arg, format);

	va_end(arg);

	return (m);
}
