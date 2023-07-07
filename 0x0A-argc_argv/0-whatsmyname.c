#include <stdio.h>
#include "main.h"
/**
 * main -  the name of the program to be printed
 * @argc: number of command line arguments
 * @argv: arguments of array
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
