#include "main.h"

/**
 * main - a copying program for files
 * @ac: argument count
 * @av: arguments array as strings
 * Return: status code
 */

int main(int ac, char **av)
{
        int fd_src;
        int fd_dest; 
        int written; 
        int read_already;
        char buff[1024];

        if (ac != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }
        fd_src = open(av[1], O_RDONLY);
        if (fd_src == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
                exit(98);
        }
        fd_dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
        if (fd_dest == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
                exit(99);
        }
        while ((read_already = read(fd_src, buff, 1024)) > 0)
        {
                written = write(fd_dest, buff, read_already);
                if (written == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
                        exit(99);
                }
        }
        if (read_already == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
                exit(98);
        }
        if (close(fd_src) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_src);
                exit(100);
        }
        if (close(fd_dest) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_dest);
                exit(100);
        }
        return (0);
}
