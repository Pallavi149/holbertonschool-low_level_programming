#include "main.h"
#include <unistd.h>

/**
 * close_fd - closes file descriptor
 * @fd: file descriptor
 *Return: Nothing
 */
void close_fd(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * read_write - Reading a file and write into another
 * @fd_from: file descriptor of a from file
 * @fd_to: file descriptotr of a to file
 * @file_from: file name of a from file
 * @file_to: file name of a to file
 * Return: Nothing
 */
void read_write(int fd_from, int fd_to, char *file_from,  char *file_to)
{
	char buffer[1024];
	ssize_t read_txt;
	ssize_t write_txt;

	while (1)
	{
		read_txt = read(fd_from, buffer, 1024);
		if (read_txt < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (read_txt == 0)
		{
			break;
		}
		write_txt = write(fd_to, buffer, read_txt);
		if (write_txt < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
}

/**
 * copy_file -  copy files
 * @file_from: is the name of the file to copy from
 * @file_to: is the name of the file to copy to
 * Return: nothing
*/
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to;

	if (file_from == NULL || file_to == NULL)
	{
		exit(1);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	read_write(fd_from, fd_to, file_from, file_to);
	close_fd(fd_from);
	close_fd(fd_to);
}

/**
 * main - Starting point
 * @argc: Argument count
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
