#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output
 * @filename: File name of the archive
 * @letters: Number of letters stored in the buffer
 *
 * Return: The size of the letters readed and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readData;
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t ans;

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	readData = read(fd, buffer, letters);
	if (readData == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	ans = write(STDOUT_FILENO, buffer, readData);
	if ((ans == -1) || (ans != readData))
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	readData = close(fd);
	if (readData == -1)
		return (0);
	return (ans);
}
