#include "holberton.h"
/**
  * main - copy f1 to f2
  * @argc: argument count
  * @av: arguments
  * Return: always 0
  */

int main(int argc, char **av)
{
	int f1; /* file_from */
	int f2; /* file_to */
	int fd, cp1, cp2;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	f1 = open(av[1], O_RDONLY);
	if (f1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	f2 = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);

	while ((fd = read(f1, buf, 1024)) > 0)
	{
		if (f2 < 0 || (write(f2, buf, fd) != fd))
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	cp1 = close(f1);
	if (cp1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
	cp2 = close(f2);
	if (cp2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
	return (0);
}
