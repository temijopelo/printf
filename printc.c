#include "main.h"

/**
 * char_print -function that prints a character
 * @val: arg for char
 * Return: 1 on success
 */

int char_print(va_list val)
{
	char c;

	c = va_arg(val, int);
	if (_putchar(c) == -1)
	{
		return (0);
	}

	return (1);
}
