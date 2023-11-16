#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>

/**
 * struct print - print
 * @parament: The operator
 * @f: The function assciated
 */

typedef struct print
{
	char *parameter;
	int (*f)(va_list ap);
} print_type;

int _printf(const char *format, ...);
int my_putchar (char c);
int _print_char(va_list ap);
int _print_string(va_list ap);
int _print_percent(va_list ap);

#endif
