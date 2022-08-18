#include "function_pointers.h"

/**
 *get_op_func - selects the correct function to
 *perform the operation asked by the user
 *@s: the operator
 *Return: pointer to the function that corresponds
 *to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 6)
{
if (*s == *(ops[i].op))
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
