#include "lists.h"
#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @char: character to print
 * Return: 1 on Sucess, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1))
}
