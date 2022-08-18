#include "function_pointers.h"
#include <string.h>

/**
 *main - performs simple operations
 *@ac: argumemt count
 *@av: argument vector
 *Return: 0
 */


int main(int ac, char *av[])
{
int (*cal)(int, int);
int result;

if (ac != 4)
{
printf("Error\n");
exit(98);
}

else
{
if (*av[2] == '.' || strlen(av[2]) != 1)
{
printf("Error\n");
exit(99);
}

cal = get_op_func(av[2]);

result = cal(atoi(av[1]), atoi(av[3]));
if ((*av[2] == '/' || *av[2] == '%') && result <= 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", result);
}

return (0);
}
