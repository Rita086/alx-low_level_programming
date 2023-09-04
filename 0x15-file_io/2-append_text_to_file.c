#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - attach text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1, If the file does
 * not exist the user lacks write permissions - -1, Otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, k, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
	for (size = 0; text_content[size];)
		size++;
	}
	j = open(filename, O_WRONLY | O_APPEND);
	k = write(j, text_content, size);
	if (j == -1 || k == -1)
		return (-1);
	close(j);

	return (1);
}
