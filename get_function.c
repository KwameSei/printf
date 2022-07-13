#include "main.h"

/**
 * get_func - find the corresponding function
 * @s: check array
 * Return: a function to print
 */
int (*get_func(char s))(va_list)
{
sps_t sps[] = {
{"c", print_c},
{"s", print_s},
{"d", print_d},
{"i", print_i},
{"b", print_b},
{NULL, NULL}
};

int i;

for (i = 0; sps[i].c != NULL; i++)
{
if (*sps[i].c == s)
return (sps[i].f);
}
return (NULL);
}
