#include "main.h"

/**
 * _strlength - fxn that returns the lenght of a string.
 * @s: string to calc length
 * Return: string count integer.
 * Done by Jacob and Abdelkrim
 */
int _strlength(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlength_c - fxn that returns length for constant characters
 * @s: constant char arg
 * Return: char count int
 */
int _strlength_c(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}

/**
 * print_string - fxn that prints a string
 * @val: what to print
 * Return: printed string.
 */
int print_string(va_list value)
{
	char *s;
	int k, length;

	s = va_arg(value, char *);
	if (s == NULL)
	{
		s = "(null)";
		length = _strlength(s);
		for (k = 0; k < length; k++)
			_putchar(s[k]);
		return (length);
	}
	else
	{
		length = _strlength(s);
		for (k = 0; k < length; k++)
			_putchar(s[k]);
		return (length);
	}
}

