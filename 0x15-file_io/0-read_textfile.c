#include "main.h"

/**
 * read_textfile - Reads a text file & prints it to the POSIX standard output.
 * @filename: The name of the file to be read
 * @letters: The number of letters it should read and print
 * Return: The actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *h;
ssize_t n;

h = fopen("filename", "r");
n = read(1, h, letters);
fclose(h);

if (n < (ssize_t)letters)
return (0);
else
return (n);
}
