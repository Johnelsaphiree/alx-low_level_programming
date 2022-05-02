#include "main.h"

/**
 * create_file - Creates a file and write in it
 * @filename: Name of the file created
 * @text_content: Content to be written
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rd, i;
	char *p = text_content;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
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

	close(fd);

	return (1);

}
