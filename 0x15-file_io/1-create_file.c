#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - makes a file.
 * @filename: A pointer to the name of the file to make.
 * @text_content: A pointer to a string to put down to the file.
 * Return: If the function fails - -1 Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int td, c, size = 0;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
	for (size = 0; text_content[size];)
	size++;
	}
	td = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(td, text_content, size);
	if (td == -1 || c == -1)
	return (-1);
	close(td);
	return (1);
}
