#include "main.h"

/**
 * print_c - Print character variables only
 * @arg: pass va_list arg
 * Return: length of arg
 */
int print_c(va_list arg)
{
	int c = va_arg(arg, int);

	return (_putchar(c));
}

/**
 * print_s - Print string variables only
 * @arg: pass va_list arg
 * Return: length of arg
 */
int print_s(va_list arg)
{
	int i, len = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "nil";

	for (i = 0; str[i]; i++)
		len += _putchar(str[i]);
	return (len);
}

/**
 * print_d - Print decimal variables
 * @arg: pass va_list arg
 * Return: count arg
 */
int print_d(va_list arg)
{
	unsigned int num_abs, num_aux, count_Zero, count;
	int nums;

	count = 0;

	nums = va_arg(arg, int);

	if (nums < 0)
	{
		num_abs = (nums * -1);
		count += _putchar(45);
	}
	else
		num_abs = nums;


	num_aux = num_abs;
	count_Zero = 1;
	while (num_aux > 9)
	{
		num_aux /= 10;
		count_Zero *= 10;
	}


	while (count_Zero >= 1)
	{
		count += _putchar(((num_abs / count_Zero) % 10) + '0');
		count_Zero /= 10;
	}
	return (count);
}

/**
 * print_i - Print the integers variables only
 * @arg: pass va_list arg
 * Return: printed arg
 */
int print_i(va_list arg)
{
	return (print_d(arg));
}
