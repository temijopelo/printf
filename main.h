#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - printf converter
 * @id: type char pointer of the specifier
 * @func: function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*func)();
} merge;

<<<<<<< HEAD
int *_strcpy(char *dest, char *src);
int _putchar(char c);
int _printf(const char *format, ...);
int char_print(va_list val);
int str_print(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int print_pc(void);
int printi(va_list args);
int printd(va_list args);
int printb(va_list val);
int printu(va_list args);
int printo(va_list val);
int printx(va_list val);
int printX(va_list val);
int printS(va_list val);
int _printX(unsigned int n);
int printp(va_list val);
int _printx(unsigned long int n);
int printr(va_list args);
int printR13(va_list args);
=======
int _printf(const char *format, ...);
int my_putchar (char c);
int _print_char(va_list ap);
int _print_string(va_list ap);
int _print_percent(va_list ap);
char *convert(unsigned int num, int base);
int get_print(const char *format, print_type argument[], va_list ap);
>>>>>>> fdc4aa174c36ddfcd8727b26fbd658f73062adf4

#endif/*MAIN_H*/
