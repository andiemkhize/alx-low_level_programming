#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to standard output
 * @c: the cgaracter to be printed
 * Return: On success, 1
 * On error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1);
}
