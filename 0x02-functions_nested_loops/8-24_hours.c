#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: ...
 */

void jack_bauer(void)
{
	int min = 0;
	int hour = 0;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 59; minute++)
		{
			printf("%02d:%02d", hour, minute);
			printf("\n");
		}
		printf("%02d:%02d", hour, minute);
		printf("\n");
	}
}
