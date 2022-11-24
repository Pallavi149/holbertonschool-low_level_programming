#include "main.h"
/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_txt;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY);
		if (fd == -1)
		{
			return (-1);
		}
		return (1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if  (fd == -1)
	{
		return (-1);
	}
	write_txt =  write(fd, text_content, strlen(text_content));
	if (write_txt == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
