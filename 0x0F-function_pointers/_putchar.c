#include <unistd.h>
#include "function_pointers.h"
/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 * Return: On success 1 and on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
