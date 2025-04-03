#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: est un pointeur de type char constant
 * @text_content: est un pointeur de type char
 *
 * Return: valid the code
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int cf;
	int bytesWrite;

	if (filename == NULL)
		return (-1);

	cf = open(filename, O_WRONLY | O_APPEND);
	if (cf == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytesWrite = write(cf, text_content, strlen(text_content));
		if (bytesWrite == -1)
		{
			close(cf);
			return (-1);
		}
	}

	close(cf);
	return (1);
}
