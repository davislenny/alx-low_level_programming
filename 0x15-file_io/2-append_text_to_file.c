#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file name
 * @text_content: pointer to text to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssoze_t bytes_w, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);
	bytes_w = write(fd, text_content, len);
	if (bytes_w == -1 || bytes_w != len)
	{
		close(fd);
		return (-1);
	}
	cloe(fd);
	return (1);
}
