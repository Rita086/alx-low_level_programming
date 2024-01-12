#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int c, f;
	size_t size, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	size = strlen(argv[1]);
	p[0] = l[(size ^ 59) & 63];
	for (c = 0, add = 0; c < size; c++)
		add += argv[1][c];
	p[1] = l[(add ^ 79) & 63];
	for (c = 0, f = 1; c < size; c++)
		f *= argv[1][c];
	p[2] = l[(f ^ 85) & 63];
	for (f = argv[1][0], c = 0; c < size; c++)
		if ((char)f <= argv[1][c])
			f = argv[1][c];
	srand(f ^ 14);
	p[3] = l[rand() & 63];
	for (f = 0, c = 0; c < size; c++)
		f += argv[1][c] * argv[1][c];
	p[4] = l[(f ^ 239) & 63];
	for (f = 0, c = 0; (char)c < argv[1][0]; c++)
		f = rand();
	p[5] = l[(f ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
