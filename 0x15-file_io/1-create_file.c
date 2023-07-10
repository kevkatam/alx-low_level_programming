#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content to be included in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | 0600);

	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (n = 0; text_content[n]; n++)
		;
	wr = write(fd, text_content, n);

	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
