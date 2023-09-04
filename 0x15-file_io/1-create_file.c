#include "main.h"

/**
  * create_file - creates a file and insert some text
  * @filename: pointer to the name of the file
  * @text_content: string to be written to file
  * Return:  1 on success -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int file;
	int i;
	int write_file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		i = 0;

		while (text_content[i])
			i++;
		write_file = write(file, text_content, i);

		if (write_file != i)
			return (-1);
	}

	close(file);
	return (1);
}
