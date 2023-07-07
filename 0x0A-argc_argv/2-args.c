#include <stdio.h>
#include "main.h"

/**
 * main - all arguments it receives to be output
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
	printf("%s\n", argv[j]);
	}
	return (0);
}
