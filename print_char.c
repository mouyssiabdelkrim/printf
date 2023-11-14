#include "main.h"

/**
 * print_char - fxn that prints a character.
 * @value: char to print
 * Return: integer.
 * Done by Jacob and Abdelkrim
 */
int print_char(va_list value)
{
        char s;

        s = va_arg(value, int);
        _putchar(s);
        return (1);
}
