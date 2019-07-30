#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int switcher(va_list arg, const char *format);
int printstrlen(va_list arg);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
