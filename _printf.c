#include "main.h"

/**
 * printf - entry point
 * @format: string
 * Return: 0
 */

int _printf(const char *format, ...)
{
	print_type argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{NULL, NULL}
	};
	va_list ap;
	int counter = 0;

	va_start(ap, format);
	count = get_print(format, argument, ap);
	va_end(ap);
	return (count);
}
