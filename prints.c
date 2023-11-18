#include "main.h"

/**
 * str_print - prints a string
 * @val: arg for str
 * Return: the length of the string
 */

int str_print(va_list val)
{
	char *s = va_arg(val, char *);

	if (s == NULL)
		s = "(null)";

	for (int i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (_strlen(s));
}
