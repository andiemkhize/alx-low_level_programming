#include <unistd>

/**
 * _putchar - writes the char c to cstdout 
 * @c: character to print
 *
 * Return: 1 on sucess or -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
