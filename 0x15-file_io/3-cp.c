#include <stdio.h>
#include <stdlib.h>
#include "main.h
char *create_buffer(char *file);
void close_file(int td);
/**
 * create_buffer - Assigns 1024 bytes for a buffer.
 * @file: The name of the file buffer is keeping chars for.
 * Return: A pointer to the newly-assigneded buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", file);
	exit(99);
	}
	return (buffer);
}
/**
 * close_file - Closes file descriptors.
 * @td: The file descriptor to be closed.
 */
void close_file(int td)
{
	int m;
	m = close(td);
	if (m == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", td);
	exit(100);
	}
}
/**
 * main - duplicates the contents of a file to another file.
 * @argc: The number of argu given to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, b, c;
	char *buffer;
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	b = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
	if (from == -1 || b == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}
	c = write(to, buffer, b);
	if (to == -1 || c == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
	}
	b = read(from, buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);
	} while (b > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
