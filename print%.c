#include "main.h"

/**
 * print_pc - prints the percent sign (%).
 * Return: int
 */

int print_pc(void)
{
	char percent_sign = '%';

	if (_putchar(percent_sign) == -1)
	{
		return (0);
	}

	return (1);
}
