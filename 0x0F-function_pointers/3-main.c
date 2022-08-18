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
cal = get_op_func(av[2]);

if (cal == NULL || strlen(av[2]) != 1)
{
printf("Error\n");
exit(99);
}

else
{
result = cal(atoi(av[1]), atoi(av[3]));
if ((*av[2] == '/' || *av[2] == '%') && result <= 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", result);
}
}

return (0);
}
