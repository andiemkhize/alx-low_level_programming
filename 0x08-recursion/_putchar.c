#include <unistd>
/**
 * This is my _putchar.c
 */

int _putchar(char c)
{
	return write(1, &c, 1)
}
