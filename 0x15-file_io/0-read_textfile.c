#include "main.h"
/**
 * read_textfile - reads a textfile and prints to stdout
 * @filename: name of file to be read from
 * @letters: number of letters to be read and print
 * Return: number of printable letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fd);

	free(buffer);

	return (wr);
}
