#include "main.h"
/**
 * print_numbers - print num from 0 - 9
 *Return: Nothing on success
 */

void print_numbers(void)
{
	int start = 0;
	int end = 9;

	while (start <= end)
	{
		_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}
