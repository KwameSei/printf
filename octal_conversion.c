#include "main.h"

/**
 * print_o - converts decimals to ocatal format
 * @arg: passed arg
 * Return: count
 */
int print_o(va_list arg)
{
	unsigned int i, count, number, binary, arr[32];

	i = 0, count = 0;
	number = va_arg(arg, i);

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
			binary = number % 8;
			number /= 8;
			arr[count] = binary;
			i--;
		}
		while (i > 0)
		{
			_putchar('0' + arr[i]);
			i--;
		}
		_putchar('0' + arr[i]);
		_putchar('\n');
	return (count);
	}
}
