#include "main.h"
#include <stdio.h>

/**
 * mError - Print error message
 * @exitCode: exit code to stop
 * @format: data
 */
void mError(int exitCode, const char *format)
{
	dprintf(STDERR_FILENO, "%s\n", format);
	exit(exitCode);
}

/**
 * mErrorString - Print error message
 * @exitCode: exit code to stop
 * @format: data
 * @s: data
 */
void mErrorString(int exitCode, const char *format, const char *s)
{
	dprintf(STDERR_FILENO, "%s %s\n", format, s);
	exit(exitCode);
}


/**
 * main - Copy a file into another file
 * @argc: Number of args in argv
 * @argv: Arguments data in stdin
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd1, fd2, rd, cp, cl;
	char buff[1024];

	if (argc != 3)
		mError(97, "Usage: cp file_from file_to");

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		mErrorString(98, "Error: Can't read from file", argv[1]);

	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
		mErrorString(99, "Error: Can't write to", argv[2]);

	for (rd = read(fd1, buff, 1024); rd > 0; rd = read(fd1, buff, 1024))
	{
		cp = write(fd2, buff, rd);
		if (cp == -1)
			mErrorString(99, "Error: Can't write to", argv[2]);
	}
	if (rd == -1)
		mErrorString(98, "Error: Can't read from file", argv[1]);

	cl = close(fd1);
	if (cl == -1)
		mErrorString(100, "Error: Can't close fd", argv[1]);
	cl = close(fd2);
	if (cl == -1)
		mErrorString(100, "Error: Can't close fd", argv[2]);

	return (0);
}
