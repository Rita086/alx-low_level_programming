#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile- go through text file output to STDOUT.
 * @filename: text being checked for
 * @letters: count of letters to be checked through
 * Return: w- actual amount of btes checked through and output
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t xy;
	ssize_t b;
	ssize_t c;

	xy = open(filename, O_RDONLY);
	if (xy == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	c = read(xy, ptr, letters);
	b = write(STDOUT_FILENO, ptr, c);

	free(ptr);
	close(xy);
	return (b);
}
