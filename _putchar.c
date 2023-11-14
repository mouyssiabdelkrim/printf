#include "main.h"
/**
 * _putchar - function that writes char to std out
 * @c: char to print
 * Return: 1 if success, -1 if err
 * Done by Jacob and Abdelkrim
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
