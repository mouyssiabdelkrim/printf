#include "main.h"

/**
 * print_Hexadecimal - prints an hexadecimal number.
 * @value: arguments.
 * Return: counter.
 * Done by Jacob and Abdelkrim
 */
int print_Hexadecimal(va_list value)
{
	int m;
	int *arr;
	int countr = 0;
	unsigned int numb = va_arg(value, unsigned int);
	unsigned int temp_no = numb;

	while (numb / 16 != 0)/*rem and quotient*/
	{
		numb /= 16;
		countr++;
	}
	countr++;
	arr = malloc(countr * sizeof(int));

	for (m = 0; m < countr; m++)
	{
		arr[m] = temp_no % 16;
		temp_no /= 16;
	}
	for (m = countr - 1; m >= 0; m--)
	{
		if (arr[m] > 9)
			arr[m] = arr[m] + 7;
		_putchar(arr[m] + '0');
	}
	free(arr);
	return (countr);
}

