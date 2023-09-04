#include "main.h"

/**
 * read_textfile - Prints the contents of a text file.
 * @filename: The name of the file to be printed.
 * @letters: The maximum number of characters to print.
 *
 * Return: The number of characters printed, or -1 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		perror("Error opening file");
		return (-1); /* Return -1 to indicate an error */
	}

	int character;
	ssize_t char_count = 0; /* Initialize the character count */

	while ((character = fgetc(file)) != EOF && char_count < letters)
	{
		putchar(character);
		char_count++;
	}

	fclose(file);

	return (char_count); /* Return the number of printed characters */
}
