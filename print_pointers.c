#include "main.h"

/**
 * print_pointer - prints pointer address.
 * @value: arguments.
 * Return: counter.
 * Done by Jacob and Abdelkrim
 */
int print_pointer(va_list value)
{
        void *pointr;
        int k, m;
        char *str = "(nil)";
        long int n;

        pointr = va_arg(value, void*);
        if (pointr == NULL)
        {
                for (m = 0; str[m] != '\0'; m++)
                {
                        _putchar(str[m]);
                }
                return (m);
        }

        n = (unsigned long int)pointr;

        _putchar('0');
        _putchar('x');

        k = print_hexadecimal_extra(n);
        return (k + 2);
}
