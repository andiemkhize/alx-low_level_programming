#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX STDOUT
 * @filename: text of the filename to be read
 * @letters: number of letters to be read
 * Return: 0, if file cannot be read or filename is NULL
 * w - for actual number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, w, t;

	fd = open(filename, O_RDONLY)
		if (fd == -1)
			return (0);

	buff = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = writes(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
