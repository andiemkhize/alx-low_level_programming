#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: pointer to the file being created
 * @text_content: pointer to the string to write to the fie
 *
 * Return: 1 if successful, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, strlen(text_content));

		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - calculate the lenght of a string.
 * @str: array of characters.
 *
 * Return: lenght of the string.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str++)
		count++;
	return (count);
}
