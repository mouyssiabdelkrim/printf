#include "main.h"
/**
 * convert_rot13 - fxn that convert arg into rot13
 * @argz: arg to convert
 * Return: counter
 *
 */
int convert_rot13(va_list argz)
{
        int m, n;
        int k, ctr = 0;
        char *s = va_arg(argz, char*);
        char p[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

        if (s == NULL)
                s = "(null)";
        for (m = 0; s[m]; m++)
        {
                k = 0;
                for (n = 0; p[n] && !k; n++)
                {
                        if (s[m] == p[n])
                        {
                                _putchar(b[n]);
                                ctr++;
                                k = 1;
                        }
                }
                if (!k)
                {
                        _putchar(s[m]);
                        ctr++;
                }
        }
        return (ctr);
}
