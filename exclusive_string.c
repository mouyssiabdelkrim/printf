#include "main.h"
/**
 * exclusive_string - fxn that prints exclusive string.
 * @value: variadic argument
 * Return: special character
 * Done by Jacob and Abdelkrim
 */

int exclusive_string(va_list value)
{
        char *str;
        int k, len = 0;
        int val;

        str = va_arg(value, char *);
        if (str == NULL)
                str = "(null)";
        for (k = 0; str[k] != '\0'; k++)
        {
                if (str[k] < 32 || str[k] >= 127)
                {
                        _putchar('\\');
                        _putchar('x');
                        len = len + 2;
                        val = str[k];
                        if (val < 16)
                        {
                                _putchar('0');
                                len++;
                        }
                        len = len + print_Hexadecimal_Extra(val);
                }
                else
                {
                        _putchar(str[k]);
                        len++;
                }
        }
        return (len);
}
