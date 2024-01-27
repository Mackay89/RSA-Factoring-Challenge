#include "factor.h"

/**
 * main - main function
 * @argc: The number of command-line argument
 * @argv: An array of string containing the command-line arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	size_t tmp;
	ssize_t line;
	FILE *fptr;
	char *buffer = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&buffer, &tmp, fptr)) != -1)
	{
		free(buffer);
	}
return (0);
}
