#include "main.h"
/**
 * print_decimal - funx that prints a decimal
 * @argz: argument to print
 * Return: printed decimal
 * Done by Jacob and Abdelkrim
 */

int print_decimal(va_list argz)
{
        int n = va_arg(argz, int);
        int last_no = n % 10;
        int numbr, digit;
        int  dec = 1;
        int expone = 1;

        n = n / 10;
        numbr = n;

        if (last_no < 0)
        {
                _putchar('-');
                numbr = -numbr;
                n = -n;
                last_no = -last_no;
                dec++;
        }
        if (numbr > 0)
        {
                while (numbr / 10 != 0)
                {
                        expone = expone * 10;
                        numbr = numbr / 10;
                }
                numbr = n;
                while (expone > 0)
                {
                        digit = numbr / expone;
                        _putchar(digit + '0');
                        numbr = numbr - (digit * expone);
                        expone = expone / 10;
                        dec++;
                }
        }
        _putchar(last_no + '0');

        return (dec);
}
