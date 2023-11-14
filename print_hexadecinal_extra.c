#include "main.h"

/**
 * print_hexadecimal_extra - prints an hexadecimal number.
 * @numb: arguments
 * Return: counter
 */
int print_hexadecimal_extra(unsigned long int numb)
{
        long int k;
        unsigned long int temp_no = numb;
        long int *arr;
        long int counter = 0;

        while (numb / 16 != 0)
        {
                numb /= 16;
                counter++;
        }
        counter++;
        arr = malloc(counter * sizeof(long int));

        for (k = 0; k < counter; k++)
        {
                arr[k] = temp_no % 16;
                temp_no = temp_no / 16;
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
