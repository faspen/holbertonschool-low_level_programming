#include "holberton.h"
/**
  * append_text_to_file - add text to end of a file
  *
  * @filename: file
  * @text_content: added text
  *
  * Return: 1 on success, -1 on fail
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, file2, n = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);

	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	if (text_content != NULL)
	{
		while (text_content[n])
			n++;
	}
	file2 = write(file, text_content, n);

	if (file2 == -1)
		return (-1);

	close(file2);
	return (1);
}
