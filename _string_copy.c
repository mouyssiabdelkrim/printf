#include "main.h"

/**
 * _string_copy - fxn that copy string pointed to by src to dest
 * @dest: buffer to copy string in src
 * @src: pointer containing string to copy
 * Return: pointer to dest
 */
char *_string_copy(char *dest, char *src)
{
        int k;

        for (k = 0; src[k] != '\0'; k++)
        {
                dest[k] = src[k];
        }
        dest[k] = '\0';
        return (dest);
}
