#include "main.h"

/**
 * ALXprintf_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int ALXprintf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
