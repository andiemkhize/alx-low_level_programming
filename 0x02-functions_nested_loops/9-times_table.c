#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
		{
			for (b = 0; b <= 9; b++)
				printf("%d", a * b);

			putchar('\n');
		}
}
