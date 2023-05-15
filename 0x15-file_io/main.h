#ifndef MAIN_H
#define MAIN_H

/*
 * Description: prototype source file
 *       
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char character);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int print_error(int error, char *s, int fd);
char *create_buffer(char *file);
void close_file(int fd);

#endif
