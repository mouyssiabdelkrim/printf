#include "main.h"

/**
 * print_integer - fxn to print an integer
 * @argz: arguments to print
 * Return: an integer
 * Done by Jacob and Abdelkrim
 */
int print_integer(va_list argz)
{
	int input_no = va_arg(argz, int);
	int num, digit_temp, exp = 1;
	int last_digit = input_no % 10;
	int  counter = 1;

	input_no = input_no / 10;
	num = input_no;

	if (last_digit < 0)
	{
		_putchar('-');
		num = -num;
		input_no = -input_no;
		last_digit = -last_digit;
		counter++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = input_no;
		while (exp > 0)
		{
			digit_temp = num / exp;
			_putchar(digit_temp + '0');
			num = num - (digit_temp * exp);
			exp = exp / 10;
			counter++;
		}
	}
	_putchar(last_digit + '0');

	return (counter);
}

