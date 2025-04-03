#include "main.h"

/**
 * create_file - check the code
 * @filename: est un pointeur de type char constant
 * @text_content: est un pointeur de type char
 *
 * Return: valid the code
 */
int create_file(const char *filename, char *text_content)
{
	int cf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0666);
	ssize_t bytesWrite = write(cf, text_content, strlen(text_content));

	if (filename == NULL)
		return (-1);

	if (cf == -1)
		return (-1);

	if (text_content != NULL)
		if (bytesWrite == -1)
		{
			close(cf);
			return (-1);
		}

	close(cf);
	return (1);
}
