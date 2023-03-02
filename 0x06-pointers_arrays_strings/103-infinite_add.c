#include "main.h"
/**
 * rev_string - reverse array
 * @n: reverse params
 * Return: 0
 */

void rev_string(char *n)
{
	int i;
	int j;
	char temp;

	while (*(n + 1) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++; i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + 1);
		*(n + 1) = temp;
	}
}
/**
 * infinit_add - add two numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0; 1 = 0; j = 0; digits = 0;
	
