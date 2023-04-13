#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - name say it all
 * @filename: name of the file
 * @text_content: text to append
 * Description: appends text to given file
 * Return: status code
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "a");
	int result = fputs(text_content, fp);

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	if (fp == NULL)
	{
		return (-1);
	}

	fclose(fp);

	return (result == EOF ? -1 : 1);
}
