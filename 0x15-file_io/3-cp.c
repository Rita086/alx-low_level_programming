#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_ptr(char *file);
void close_file(int th);

/**
 * create_ptr - Assign 1024 bytes for a buffer.
 * @file: The file buffer name is storing the chars for
 * Return: An indicator to the newly-allocated buffer.
 */
char *create_ptr(char *file)
{
	char *ptr;

	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't display to %s\n", file);
	exit(99);
	}
	return (ptr);
}
/**
 * close_file - Terminates file descriptors.
 * @fd: The file descriptor to be terminated
 */
void close_file(int fd)
{
	int k;

	k = close(fd);
	if (k == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't terminate fd %d\n", fd);
	exit(100);
	}
}
/**
 * main - replicates the contents of a file to a different file
 * @argc: The count of arguments supplied to the program.
 * @argv: An array of indicators to the argument
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is wrong - exit code 97.
 * If file_from does not exist or cannot be checked through - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be terminated - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, j, k;
	char *ptr;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_fo\n");
	exit(97);
	}
	ptr = create_ptr(argv[2]);
	from = open(argv[1], O_RDONLY);
	j = read(from, ptr, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
	if (from == -1 || j == -1)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
	free(ptr);
	exit(98);
	}
	k = write(to, ptr, j);
	if (to == -1 || k == -1)
	{
	dprintf(STDERR_FILENO,
			"Error: Can't read to %s\n", argv[2]);
	free(ptr);
	exit(99);
	}
	j = read(from, ptr, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (j > 0);
	free(ptr);
	close_file(from);
	close_file(to);

	return (0);
}

