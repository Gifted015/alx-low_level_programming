#include "function_pointers.h"

/**
 *print_name - prints a name
 *@name: name
 *@f: pointer to printing style
 */


void print_name(char *name, void (*f)(char *))
{
f(name);
}
