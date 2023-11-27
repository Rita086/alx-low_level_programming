#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile- look through text file output to standard output..
 * @filename:  read through the text file
 * @letters:  read the numb of letters
 * Return: w- actual number of bytes read andbe outputed
 * otherwise 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t td;
	ssize_t x;
	ssize_t y;

	td = open(filename, O_RDONLY);
	if (td == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(td, buf, letters);
	x = write(STDOUT_FILENO, buf, y);
	free(buf);
	close(td);
	return (x);
}
