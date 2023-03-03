#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if c is lowercase or uppercase
 * If otherwise, return 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	
	else
		return 0;
}
