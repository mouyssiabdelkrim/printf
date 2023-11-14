#include "main.h"

/**
 * print_binary - function that prints in binary
 * @value: parameter.
 * Return: integer
 * Done by Jacob and Abdelkrim
 */
int print_binary(va_list value)
{
	int flag = 0;
	int counter = 0;
	int pos, a = 1, b;
	unsigned int number = va_arg(value, unsigned int);
	unsigned int bit_pos;

	for (pos = 0; pos < 32; pos++)/*run 32 times for each 32-bit unsignd int*/
	{
		bit_pos = ((a << (31 - pos)) & number);
		if (bit_pos >> (31 - pos))
			flag = 1;
		if (flag)
		{
			b = bit_pos >> (31 - pos);
			_putchar(b + 48);
			counter++;
		}
	}
	if (counter == 0)
	{
		counter++;
		_putchar('0');
	}
	return (counter);
}

