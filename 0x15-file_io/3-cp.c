#include "main.h"

/**
 * print_error - prints error messages and exits with exit value
 * @error: fd or exit status code
 * @s: source or destination file name
 * @fd: file descriptor
 * Return: 0 for succes
 **/

int print_error(int error, char *s, int fd)
{
        switch (error)
        {
        case 97:
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(error);
        case 98:
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
                exit(error);
        case 99:
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
                exit(error);
        case 100:
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
                exit(error);
        default:
                return (0);
        }
}

/**
 * main - copies source file to destination file
 * @argc: ./a.out , source and destination
 * @argv: source file and destination file
 * Return: 0 for success, 97-100 exit status codes
 */
int main(int argc, char *argv[])
{
        int fd_source, fd_destination, bytes_read, bytes_written;
        char *buffer[1024];

        if (argc != 3)
                print_error(97, NULL, 0);

        /*sets file descriptor for copy-to file*/
        fd_destination = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
        if (fd_destination == -1)
                print_error(99, argv[2], 0);

        /*sets file descriptor for copy-from file*/
        fd_source = open(argv[1], O_RDONLY);
        if (fd_source == -1)
                print_error(98, argv[1], 0);

        /*reads source file as and copies the contents to destination file
        /*copies/writes contents into new file */
        while ((bytes_read = read(fd_source, buffer, 1024)) != 0)
        {
                if (bytes_read == -1)
                        print_error(98, argv[1], 0);

                bytes_written = write(fd_destination, buffer, bytes_read);
                if (bytes_written == -1)
                        print_error(99, argv[2], 0);
        }

        close(fd_destination) == -1 ? (print_error(100, NULL, fd_destination)) : close(fd_destination);
        close(fd_source) == -1 ? (print_error(100, NULL, fd_source)) : close(fd_source);
        return (0);
}
