#include "main.h"
/**
 * swap_int - swap variable value
 * @a: first int
 * @b: second int
 * Reurn: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
