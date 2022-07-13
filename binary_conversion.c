#include "main.h"

/**
 * print_b - converts to binary all decimals passed
 * @arg: passed variable
 * Return: length of converted arg
 */

int print_b(va_list arg)
{
unsigned int i, count, number, binary, arr[32];

i = 0, count = 0;
number = va_arg(arg, int);

if (number < 1)
{
_putchar(48);
count++;
return (count);
}
else
{
while (number > 0)
{
binary = number % 2;
number /= 2;
arr[count] = binary;
count++;
}
i = count - 1;
while (i > 0)
{
_putchar('0' + arr[i]);
i--;
}
_putchar('0' + arr[i]);
}
return (count);
}
