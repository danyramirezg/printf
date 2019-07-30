#include "holberton.h"
/**
 * switcher - function for check different cases
 * @arg: argument of the fuctions
 * @format: values
 * Return - int
 */

int switcher(va_list arg, const char *format)
{
	int i = 0, m = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
		switch (format[i + 1])
		{
		case 'c':
			_putchar(va_arg(arg, int));
			i++;
			break;
		case 's':
			m += printstrlen(arg);
				m--, i++;
			break;
		case '%':
			_putchar('%');
			i++;
			break;
		case '\0':
			m = -2;
			break;
		default:
			_putchar('%');
			break;
		}
	}
	else
		_putchar(format[i]);
	m += 1;
	}
	return (m);
}
