#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile- Read text file  to be output in STDOUT.
 * @filename: text file being gone through
 * @letters: numb of letters to be gone through
 *  Return: w- actual number of bytes read and outputed otherwise 0 or null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t td;
	ssize_t x;
	ssize_t y;

	td = open(filename, O_RDONLY);
	if (td == -1)
	return (0);
	str = malloc(sizeof(char) * letters);
	y = read(td, str, letters);
	x = write(STDOUT_FILENO, str, y);
	free(str);
	close(td);
	return (x);
}
