#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: format specifier.
 * Return: the number of chars printed.
 */

int _printf(const char * const format, ...)
{
	merge p[] = {
		{"%s", str_print}, {"%c", char_print},
		{"%%", print_pc},
		{"%i", printi}, {"%d", printd}, {"%r", printr},
		{"%R", printR13}, {"%b", printb},
		{"%u", printu},
		{"%o", printo}, {"%x", printx}, {"%X", printX},
		{"%S", printS}, {"%p", printp}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		for (j = 13; j >= 0; j--)
		{
			if (p[j].id[0] == format[i] && p[j].id[1] == format[i + 1])
			{
				length += p[j].func(args);
				i += 2;
				goto Here;
			}
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
