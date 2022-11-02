#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to filename
 * @letters: number of letters
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_r, bytes_w;
	char buf[BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_r = read(fd, &buf[0], letters);
	bytes_w = write(STDOUT_FILENO, &buf[0], bytes_r);
	close(fd);
	return (bytes_r);
}
