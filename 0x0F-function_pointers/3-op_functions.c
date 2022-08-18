#include "function_pointers.h"

/**
 *op_add - adds two integers
 *@a: first integer
 *@b: second integer
 *Return: the correct answer
 */

int op_add(int a, int b)
{
int r = a + b;
return (r);
}


/**
 *op_sub - subtracts two integers
 *@a: first integer
 *@b: second integer
 *Return: the correct answer
 */

int op_sub(int a, int b)
{
int r = a - b;
return (r);
}


/**
 *op_mul - multiplies two integers
 *@a: first integer
 *@b: second integer
 *Return: the correct answer
 */

int op_mul(int a, int b)
{
int r = a * b;
return (r);
}

/**
 *op_div - divides two integers
 *@a: first integer
 *@b: second integer
 *Return: 0 if divisor is 0 else returns the correct answer
 */

int op_div(int a, int b)
{
if (b == 0)
return (0);

else
{
int r = a / b;
return (r);
}
}

/**
 *op_mod - finds the remainder of the division of two integers
 *@a: first integer
 *@b: second integer
 *Return: -1 if divisor is 0 else returns the correct answer
 */

int op_mod(int a, int b)
{
if (b == 0)
return (-1);

else
{
int r = a % b;
return (r);
}
}
