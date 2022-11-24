#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: is the name of the file to read a text from
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t read_txt;
	ssize_t write_txt;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(filename) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	read_txt = read(fd, buf, letters);
	if (read_txt == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	write_txt = write(STDOUT_FILENO, buf, read_txt);
	if (write_txt == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (read_txt);
}
