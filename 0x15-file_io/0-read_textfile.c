#include "main.h"

/**
  * read_textfile - reads a text file and prints to the POSIX stdout.
  * @filename: pointer to the file
  * @letters:  number of letters it should read and print.
  * Return: number of character printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, read_file, write_out;
	char *buf;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);

	if (buf == NULL)
		return (0);
	read_file = read(file, buf, letters);

	if (read_file == -1)
		return (0);
	buf[letters] = '\0';
	write_out = write(STDOUT_FILENO, buf, read_file);

	if (write_out == -1)
		return (0);

	close(file);
	free(buf);
	return (write_out);
}
