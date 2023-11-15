#ifndef PRINTF_HEADER
#define PRINTF_HEADER

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/*Done by Jacob and Abdelkrim*/

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} format_spec;

int print_decimal(va_list argz);
int print_integer(va_list argz);
int print_binary(va_list value);
int _putchar(char c);
int print_octal(va_list value);
int print_percent(void);
int print_hexadecimal(va_list value);
int print_Hexadecimal(va_list value);
int _strlength(char *s);
int _strlength_c(const char *s);
int print_string(va_list value);
int print_pointer(va_list value);
int print_hexadecimal_extra(unsigned long int numb);
int print_Hexadecimal_Extra(unsigned int num);
int print_char(va_list val);
int print_unsigned_int(va_list args);
int reverse_string(va_list args);
char *_string_copy(char *dest, char *src);
int exclusive_string(va_list value);
int convert_rot13(va_list argz);
int _printf(const char *format, ...);

#endif
