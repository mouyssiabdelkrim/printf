#include "main.h"

/**
 * reverse_string - function that prints a str in reverse
 * @args: args from va_arg list
 * Return: reversed string
 * Done by Jacob and Abdelkrim
 */
int reverse_string(va_list args)
{

	char *str = va_arg(args, char*);
	int k;
	int m = 0;

	if (str == NULL)
		str = "(null)";
	while (str[m] != '\0')
		m++;

	for (k = m - 1; k >= 0; k--)
	{
		_putchar(str[k]);
	}

	return (m);
}
