#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int text_size(char *text);

/**
 * read_textfile - reads a text file then prints it to POSIX standard output.
 * @filename: the file to read.
 * @letters: the number of characters to print.
 *
 * Return: returns numbers of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, data;
	char *text = (char *)calloc(letters, sizeof(char));

	fd = open(filename, O_RDONLY);
	if (fd < 0 || filename == NULL)
		return (0);

	data = read(fd, text, letters);
	text[data] = '\0';
	letters = text_size(text);

	write(STDOUT_FILENO, text, letters);
	close(fd);

	return (letters);
}

/**
 * text_size - count the numbers of characters in @text.
 * @text: the text to count the characters.
 *
 * Return: returns number of characters in @text.
 */
int text_size(char *text)
{
	int count = 0;

	while (*text)
	{
		count++;
		text++;
	}
	return (count);
}
