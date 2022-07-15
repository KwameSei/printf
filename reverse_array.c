#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array;
 * @n: number of elements in array
 */
void reverse_array(char *a, int n)
{
	int i, temp;

	i = 0;
	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
