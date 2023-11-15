#include "main.h"

/**
 * print_hexadecimal - fxn that prints arg in hexadecimal notation
 * @value: arg provided
 * Return: argument in hex notation
 * Done by Jacob and Abdelkrim
 */
int print_hexadecimal(va_list value)
{
	int k;
	int *arr;
	int counter = 0;
	unsigned int number = va_arg(value, unsigned int);
	unsigned int temp_no = number;

	while (number / 16 != 0)
	{
		number /= 16;
		counter++;
	}

	counter++;
	arr = malloc(counter * sizeof(int));/*mem alloc*/

	for (k = 0; k < counter; k++)
	{
		arr[k] = temp_no % 16;
		temp_no /= 16;
	}
	for (k = counter - 1; k >= 0; k--)
	{
		if (arr[k] > 9)
			arr[k] = arr[k] + 39;
		_putchar(arr[k] + '0');
	}
	free(arr);
	return (counter);
}
