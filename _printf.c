#includi "main.h"
/**
 * _printf - function that prints based on specified input type
 * @format: specifier argument
 * Return: no fo characters printed
 */
int _printf(const char * const format, ...)
{
        format_spec p[] = {
                {"%s", print_string}, {"%c", print_char},
                {"%%", print_percent},
                {"%i", print_integer}, {"%d", print_decimal}, {"%r", reverse_string},
                {"%R", convert_rot13}, {"%b", print_binary},
                {"%u", print_unsigned_int},
                {"%o", print_octal}, {"%x", print_hexadecimal}, {"%X", print_Hexadecimal},
                {"%S", exclusive_string}, {"%p", print_pointer}
        };

        va_list args;
        int k = 0;
        int m;
        int length = 0;

        va_start(args, format);
        if (format == NULL || (format[0] == '%' && format[1] == '\0'))
                return (-1);

        while (format[k] != '\0')
        {
                m = 13;
                while (m >= 0)
                {
                        if (p[m].ph[0] == format[k] && p[m].ph[1] == format[k + 1])
                        {
                                length += p[m].function(args);
                                k = k + 2;

                        }
                        m--;
                }
                _putchar(format[k]);
                length++;
                k++;
        }

        va_end(args);
        return (length);
}
