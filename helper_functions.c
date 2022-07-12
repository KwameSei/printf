#include "main.h"

/**
 * print_c - print character (%c)
 * @arg: stores a list of characters
 * Return: num of parameters printed
 */
/**
int print_c(va_list arg)
{
int c = va_arg(arg, int);
return (_putchar(c));
}
*/
/**
 * print_s - print string (%s)
 * @arg: stores a list of characters
 * Return: num of parameters printed
 */
/**
int print_s(va_list arg)
{
int i, count = 0;
char *str;

str = va_arg(arg, char *);
if (str == NULL)
str = "(null)";

for (i = 0; str[i]; i++)
count += _putchar(str[i]);

return (count);
}
*/
