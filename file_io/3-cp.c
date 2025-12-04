#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * open_file_from - opens the source file for reading
 * @filename: name of the file to read from
 * Return: file descriptor, or exit with code 98 if fails
 */
int open_file_from(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_file_to - opens/creates the destination file for writing
 * @filename: name of the file to write to
 * Return: file descriptor, or exit with code 99 if fails
 */
int open_file_to(char *filename)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_file - copies the content from fd_from to fd_to
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file descriptor\n");
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file descriptor\n");
		exit(98);
	}
}

/**
 * main - copies content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file_from(argv[1]);
	fd_to = open_file_to(argv[2]);
	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
