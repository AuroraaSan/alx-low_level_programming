#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of the file
 * @text_content: content of file
 * Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0, length = 0;
	
	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[length])
			length++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	
	if (length > 0)
	{
		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1 || bytes_written != length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
