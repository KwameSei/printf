#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct sps - flag / function object
 *@c: flag
 *@f: function
 *
 */

typedef struct sps
{
char *c;
int (*f)(va_list arg);
} sps_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list arg);
int (*get_func(char s))(va_list arg);
int print_s(va_list arg);
int print_d(va_list arg);
int print_i(va_list arg);
int print_b(va_list arg);
int print_o(va_list arg);

#endif /* _MAIN_H_ */
