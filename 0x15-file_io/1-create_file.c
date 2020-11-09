#include "holberton.h"
/**
  * create_file - make new file
  *
  * @filename: name
  * @text_content: items to be written
  *
  * Return: 1 on success, -1 on error
  */

int create_file(const char *filename, char *text_content)
{
	int newfile, n = 0;

	if (!filename)
		return (-1);

	newfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (newfile == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (text_content != NULL)
	{
		while (text_content[n])
			n++;
	}

	write(newfile, text_content, n);

	close(newfile);
	return (1);
}
