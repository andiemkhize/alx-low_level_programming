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
	int x;
	int mul;
	int chk;

	for (a = 0; a <= 9; a++)
		{
			for (b = 0; x = 1; b <= 9; x++; b++)
			{
				mul = a * b;
				chk = a * x;

				if (chk > 9 && b != 9)
				printf("%d", mul);
				else if (b == 9)
					printf("%d", mul);
				else
					printf("%d", mul);
			}

			putchar('\n');
		}
}
