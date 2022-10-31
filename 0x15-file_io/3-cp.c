#include "main.h"

/**
 * main - copy file to another
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */

int main(int ac, char *av[])
{
	int file1, file2, size;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file1 = open(av[1], O_RDONLY, 0);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file2 == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	while ((size = read(file1, buff, 1024)) > 0)
	{
		if (write(file2, buff, size) != size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
		if (size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (close(file1) != 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file1), exit(100);
		}
		if (close(file2) != 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file2), exit(100);
		}
		return (0);
}
