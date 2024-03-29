#ifndef HEADER
#define HEADER


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int flip_bits(unsigned long int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
int _pow(int a, int b);
unsigned int binary_to_uint(const char *b);
int _putchar(char c);


#endif
