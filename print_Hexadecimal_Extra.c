#include "main.h"

/**
 * print_Hexadecimal_Extra - fxn that prints in hexadecimal notatio
 * @numbr: number to convert
 * Return: converted number
 * Done by Jacob and Abdelkrim
 */
int print_Hexadecimal_Extra(unsigned int numbr)
{
	int k;
	unsigned int temp_no = numbr;
	int *arr;
	int counter = 0;	

	while (numbr / 16 != 0)
	{
		numbr /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (k = 0; k < counter; k++)
	{
		arr[k] = temp_no % 16;
		temp_no /= 16;
	}
	for (k = counter - 1; k >= 0; k--)
	{
		if (arr[k] > 9)
			arr[k] = arr[k] + 7;
		_putchar(arr[k] + '0');
	}
	free(arr);
	return (counter);
}