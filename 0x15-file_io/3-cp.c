#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(char *file);
void close_file(int fd);

/**
 * create_array - Assign 1024 bytes for an array.
 * @file: The name of the file array is storing chars for.
 *
 * Return: A pointer to the newly-allocated array
 */
char *create_array(char *file)
{
	char *array;

	array = malloc(sizeof(char) * 1024);

	if (array == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (array);
}
/**
 * close_file - terminates file descriptors.
 * @fd: The file descriptor to be exited
 */
void close_file(int fd)
{
	int m;

	m = close(fd);

	if (m == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
}
/**
 * main - duplicate the contents of a file to another file.
 * @argc: The numb of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, s, t;
	char *array;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	array = create_array(argv[2]);
	from = open(argv[1], O_RDONLY);
	s = read(from, array, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do{
		if (from == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(array);
			exit(98);
		}
		t = write(to, array, s);
		if (to == -1 || t == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(array);
			exit(99);
		}
		s = read(from, array, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}while (s > 0) ;
	free(array);
	close_file(from);
	close_file(to);

	return (0);
}
