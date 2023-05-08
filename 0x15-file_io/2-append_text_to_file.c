#include "main.h"

/**
 * append_text_to_file - Adds text at file end
 * @filename: Filename pointer
 * @text_content: String to add at file end
 * Return: -1 if filename is NULL, -1 for access violations, 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
