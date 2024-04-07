#include "main.h"
#include <stdio.h>
/**
* main - Copies the content of one file to another.
* @ac: Argument count.
* @av: Argument vector.
* Return: 0 on success, or exits with error codes.
*/
int main(int ac, char *av[])
{
int fd_from, fd_to, rd_stat, wr_stat;
char buffer[BUFSIZE];
mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
if (ac != 3) dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd_from = open(av[1], O_RDONLY);
fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
if (fd_from < 0 || fd_to < 0) {
dprintf(STDERR_FILENO, "Error: Can't open %s\n", fd_from < 0 ? av[1] : av[2]);
if (fd_from >= 0) close(fd_from);
exit(fd_from < 0 ? 98 : 99);
}
while ((rd_stat = read(fd_from, buffer, BUFSIZE)) > 0) {
wr_stat = write(fd_to, buffer, rd_stat);
if (wr_stat != rd_stat) dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
}
if (rd_stat < 0) dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
if (close(fd_from) < 0 || close(fd_to) < 0) dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from < 0 ? fd_from : fd_to), exit(100);
return 0;
}

