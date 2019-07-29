#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _printf - Function that produces output according to a f
 * @format: Is a character string
 *
 * Return: The integer written
 */
int _printf(const char *format, ...)
{
va_list args;
bool control = false;
int written = 0;
char *str;
char ch;

va_start(args, format);

while (*format != '\0')
{
	if (!control)
	{
	if (*format != '%')
	{
		written += write(0, format, 1);
	}
	else
	{
		control = true;
	}
	}
	else
	{
	control = false;
	if (*format == '%')
	{
	written += write(0, format, 1);
	}
	else if (*format == 'c')
	{
	ch = va_arg(args, int);
	written += write(0, &ch, 1);
	}
	else if (*format == 's')
	{
	str = va_arg(args, char*);
	written += write(0, str, strlen(str));
	}
	}
	format++;
	}
	return (written);
	}
