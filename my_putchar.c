#include "main.h"

/** my_putchar - prints a char
 * @c: char input
 * Return: 1
 */

int my_putchar (char c)
{
	return (write(1, &c, 1));
}
