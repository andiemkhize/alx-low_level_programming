#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the text file being created
 * @text_content: pointer to the string
 *
 * Return: On success, 1
 * On failure, -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
				len++;
	}

	fd = open(filename, O_CREAT | 0_WRONLY | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (1);
	close(fd);
	return (1);
}
