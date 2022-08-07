#include "main.h"

/**
 *_calloc - allocate memory for an array using malloc
 *@nmemb: number of elements
 *@size: number of bytes to be allocated for each elements
 *Return: pointer to allocated memory if successful
 *or NULL if function fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *n;

if (nmemb == 0 || size == 0)
return (NULL);

else
{
n = malloc(nmemb * size);

if (n == NULL)
return (NULL);

else
{
for (i = 0; i < (nmemb * size); i++)
{
n[i] = 0;
}
return (n);
}
}
}


/**
 *error - prints error and exit with a status 98
 *return: nothing
 */

void error(void)
{
int k;
char error[] = "Error\n";

for (k = 0; error[k] != '\0'; k++)
_putchar (error[k]);

exit(98);
}


/**
 *num - checks for length of argument
 *@av: pointer argument
 *Return: length of argument
 */
int num(char *av)
{
int j, n = 0;

for (j = 0; av[j] != '\0'; j++)
{
n++;

if (av[j] < 48 || av[j] > 57)
error();
}

return (n);
}


/**
 *main - multiplies two positive numbers
 *@ac: argument count
 *@av: argument (numbers to be multiplies
 *Return: nothing
 */

int main(int ac, char *av[])
{
int i, k, j, num_1 = 0, num_2 = 0, *res, *arg_1, *arg_2;
if (ac != 3)
error();
if (*av[1] == 48 || *av[2] == 48)
_putchar(48);
else
{
num_1 = num(av[1]);
num_2 = num(av[2]);
arg_1 = (int *)malloc(sizeof(int) * (num_1));
arg_2 = (int *)malloc(sizeof(int) * (num_2));
res = _calloc((num_1 + num_2 + 1), sizeof(int));
if (arg_1 == NULL || arg_2 == NULL || res == NULL)
error();
else
{
for (i = num_1 - 1, j = 0; i >= 0; j++, i--)
arg_1[j] = av[1][i] - 48;
for (i = num_2 - 1, j = 0; i >= 0; j++, i--)
arg_2[j] = av[2][i] - 48;
for (i = 0; i < num_1; i++)
{
for (j = 0; j < num_2; j++)
{ res[i + j] = res[i + j] + arg_1[i] * arg_2[j]; } }
for (i = 0; i < (num_1 + num_2); i++)
{ k = res[i] / 10, res[i] = res[i] % 10;
res[i + 1] = res[i + 1] + k; }
for (i = (num_1 + num_2); i >= 0; i--)
if (res[i] > 0)
break;
for (k = i; k >= 0; k--)
_putchar(res[k] + 48); }
free(arg_1), free(arg_2), free(res); }
_putchar('\n');
return (0); }
