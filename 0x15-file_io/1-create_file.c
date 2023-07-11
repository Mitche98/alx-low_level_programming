#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content written in the file
 *
 * Return: 1 if success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int filed;
	int letter;
	int RWONLY;

	if (!filename)
		return (-1);

	filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filed == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letter = 0; text_content[letter]; letter++)
		;

	RWONLY = write(filed, text_content, letter);

	if (RWONLY == -1)
		return (-1);

	close(filed);

	return (1);
}
