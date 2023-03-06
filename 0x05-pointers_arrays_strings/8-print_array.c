#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of intergers
 *
 * @a: pointer to first int
 * @n: pointer to second int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int j = 0;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
