#include "main.h"

/**
 * print_octal - fuction that prints arg in octal notation
 * @value: arg provided
 * Return: octal notation of val provided
 * Done by Jacob and Abdelkrim
 */
int print_octal(va_list value)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int numb = va_arg(value, unsigned int);
	unsigned int temp_num = numb;

	while (numb / 8 != 0)
	{
		numb /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp_num % 8;
		temp_num /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

