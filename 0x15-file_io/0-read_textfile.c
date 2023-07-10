#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the
 *  POSIX standard output.
 *  @filename: pointer to name of file to be read
 *  @letters: number of letters it should read and print
 *  Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t i;

	if (fd == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	char *buf;
	ssize_t nbytes = read(fd, buf, sizeof(letters));
	if (nbytes == -1)
	{
		return (0);
		close(fd);
	}
	i = write(STDOUT_FILENO, buf, nbytes);
	close(fd);
	free(buf);
	return (i);
}
