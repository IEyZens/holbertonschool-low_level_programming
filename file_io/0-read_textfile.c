#include "main.h"

/**
 * read_textfile - check the code
 * @filename: est un pointeur de type char constant
 * @letters: est un size
 *
 * Return: valid the code
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(letters);
	ssize_t bytesRead = read(fd, buffer, letters);
	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	if (!buffer)
	{
		close(fd);
		return (0);
	}

	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	if (bytesWritten != bytesRead)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytesRead);
}
