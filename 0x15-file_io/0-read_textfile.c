#include "holberton.h"
/**
  * read_textfile - read text file and print it to stdout
  *
  * @filename: the file
  * @letters: number of letters to be read and printed
  *
  * Return: number of letters read and printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, pread, pwrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0700);
	buf = NULL;

	buf = malloc(sizeof(char) * (letters + 1));

	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	if (!buf)
		return (0);

	pread = read(fd, buf, letters);
	
	if (pread == -1)
		return (0);

	pwrite = write(STDOUT_FILENO, buf, pread);

	if (pwrite == -1)
		return (0);

	free(buf);
	close(fd);

	return (pwrite);
}
