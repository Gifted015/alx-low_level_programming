#ifndef HEADER_FILE
#define HEADER_FILE


#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int);
int op_mod(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_add(int a, int b);
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#include "3-calc.h"

#endif
