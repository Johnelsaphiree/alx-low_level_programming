#include "main.h"


/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: Content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rd, i;
	char *p = text_content;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; p[i] != '\0'; i++)
			continue;
		rd = write(fd, text_content, i);

		if (rd == -1)
			return (-1);
	}

	return (1);
}
