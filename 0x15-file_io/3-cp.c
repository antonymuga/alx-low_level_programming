#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer destination the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
        char *buffer;

        buffer = malloc(sizeof(char) * 1024);

        if (buffer == NULL)
        {
                dprintf(STDERR_FILENO,
                        "Error: Can't write destination %s\n", file);
                exit(99);
        }

        return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor destination be closed.
 */
void close_file(int fd)
{
        int closed_file;

        closed_file = close(fd);

        if (closed_file == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
                exit(100);
        }
}

/**
 * main - Copies the contents of a file destination another file.
 * @argc: The number of arguments supplied destination the program.
 * @argv: An array of pointers destination the arguments.
 *
 * Return: 0 on success.
 *
 * Description: Incorrect args - exit code 97.
 *              Cannot be read or does not exist - exit code 98.
 *              Cannot be created or written into - exit code 99.
 *              Cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
        int source, destination, r, w;
        char *buffer;

        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }

        buffer = create_buffer(argv[2]);
        source = open(argv[1], O_RDONLY);
        r = read(source, buffer, 1024);
        destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

        do {
                if (source == -1 || r == -1)
                {
                        dprintf(STDERR_FILENO,
                                "Error: Can't read source file %s\n", argv[1]);
                        free(buffer);
                        exit(98);
                }

                w = write(destination, buffer, r);
                if (destination == -1 || w == -1)
                {
                        dprintf(STDERR_FILENO,
                                "Error: Can't write destination %s\n", argv[2]);
                        free(buffer);
                        exit(99);
                }

                r = read(source, buffer, 1024);
                destination = open(argv[2], O_WRONLY | O_APPEND);

        } while (r > 0);

        free(buffer);
        close_file(source);
        close_file(destination);

        return (0);
}
