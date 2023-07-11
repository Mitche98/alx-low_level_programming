#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: name of file
 * @text_content: added content
 *
 * Return: 1 if file exists, -1 if fail or does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed;
	int letters;
	int row;

	if (!filename)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND);

	if (filed == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		row = write(filed, text_content, letters);

		if (row == -1)
			return (-1);
	}

	close(filed);

	return (1);
}
