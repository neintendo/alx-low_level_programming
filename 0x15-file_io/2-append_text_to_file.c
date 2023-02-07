#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int text_size(char *text);

/**
 * append_text_to_file - appends text at the end of @filename.
 * @filename: the name of the file to create.
 * @text_content: the text to write to the file.
 *
 * Return: returns 1 on success, -1 on error.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, data, count;
	char *text;

	if (filename == NULL)
		return (-1);

	count = text_size(text_content);

	if (text_content == NULL)
		count = 0;

	text = (char *)calloc(count, sizeof(char));

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	data = read(fd, text_content, count);
	text[data] = '\0';

	write(fd, text_content, count);
	close(fd);

	return (1);
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
