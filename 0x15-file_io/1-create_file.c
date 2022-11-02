#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to filename
 * @text_content: pointer to file content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_w, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		len = 0;
		text_content = "";
	}

	len = strlen(text_content);
	bytes_w = write(fd, text_content, len);
	if (!bytes_w)
		return (-1);
	close(fd);
	return (1);
}
