#include "main.h"

/**
 * _printf - main function to print to stdout
 * @format: array prints and select type
 * Return: length of character or number printed
 */

int _printf(const char *format, ...)
{
int count = -1;

if (format != NULL)
{
int i;
va_list arg;
int (*print)(va_list);

va_start(arg, format);

if (format[0] == '%' && format[1] == '\0')
return (-1);

count = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
{
count += _putchar(format[i]);
i++;
}
else if (format[i + 1] != '\0')
{
print = get_func(format[i + 1]);
count += (print ? print(arg) : _putchar(format[i])
+ _putchar(format[i + 1]));
+_putchar(format[i + 1]));
i++;
}
}
else
count += _putchar(format[i]);
}
va_end(arg);
}

return (count);
}
