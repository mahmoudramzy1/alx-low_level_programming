#include "main.h"
/**
 * error_file - check if file open and handle errors
 * @file_from: intial file to copy from and to check
 * @file_to: destination file to copy to
 * @argv: arguement vector
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copy content from file_from to file_to
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, error_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from, to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(to, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);

	}
	error_close = close(from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	error_close = close(to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
