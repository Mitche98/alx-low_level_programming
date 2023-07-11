#include "main.h"

/**
 * read_textfile - reads textfile and prints letters
 * @filename: name of file
 * @letters: letters printed
 *
 * Return: number of letters printed, if fail return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t get, bad;
	char *buff;

	if (!filename)
		return (0);

	filed = open(filename, O_RDONLY);

	if (filed == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	get = read(filed, buff, letters);
	bad = write(STDOUT_FILENO, buff, get);

	close(filed);

	free(buff);

	return (bad);
}
