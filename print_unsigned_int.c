#include "main.h"
/**
 * print_unsigned_int - fxn that prints a positive integer
 * @argz: arguments to fetch
 * Return: an positive integer
 * Done by Jacob and Abdelkrim
 */
int print_unsigned_int(va_list argz)
{
	unsigned int input_no = va_arg(argz, unsigned int);
	int input_copy, digit_temp, exponent = 1;
	int  counter = 1;
	int last_digit = input_no % 10;

	input_no = input_no / 10;
	input_copy = input_no;
	/**if negative*/
	if (last_digit < 0)
	{
		_putchar('-');
		input_copy = -input_copy;
		input_no = -input_no;
		last_digit = -last_digit;
		counter++;
	}
	if (input_copy > 0)
	{
		while (input_copy / 10 != 0)
		{
			exponent = exponent * 10;
			input_copy = input_copy / 10;
		}
		input_copy = input_no;
		while (exponent > 0)
		{
			digit_temp = input_copy / exponent;
			_putchar(digit_temp + '0');
			input_copy = input_copy - (digit_temp * exponent);
			exponent = exponent / 10;
			counter++;
		}
	}
	_putchar(last_digit + '0');

	return (counter);
}

