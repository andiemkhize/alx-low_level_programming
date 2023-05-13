#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: string for added content
 *
 * Return: On function failure or filename is NULL, -1
 * On success, 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
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
