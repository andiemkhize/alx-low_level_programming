#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the value of the bit
 * @index: the value of the index starting from 0 of the bit you want
 * Return: The value of bit at index
 * If error occurs, -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
