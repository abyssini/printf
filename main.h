#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int ALXprintf(va_list val);
int ALXprintf_hex(unsigned long int num);
int ALXprintf_HEX(unsigned int num);
int ALXprintf_string(va_list val);
int ALXprintf_H(va_list val);
int printf_hex(va_list val);
int ALXprintf_oct(va_list val);
int printf_unsigned(va_list args);
int ALXprintf_bin(va_list val);
int ALXprintf_srev(va_list args);
int ALXprintf_rot13(va_list args);
int ALXprintf_int(va_list args);
int ALXprintf_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int ALXrev_string(char *s);
int _strlenc(const char *s);
int ALXprintf_37(void);
int ALXprintf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
