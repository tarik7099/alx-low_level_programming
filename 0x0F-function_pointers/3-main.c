#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int oper1, oper2;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

oper1 = atoi(argv[1]);
oper2 = atoi(argv[3]);
op_func = get_op_func(argv[2]);

if (op_func == NULL)
{
printf("Error\n");
exit(99);
}

if ((op_func == op_div || op_func == op_mod) && oper2 == 0)
{
printf("Error\n");
exit(100);
}

if (argv[2][1])
{
printf("Error\n");
exit(99);
}
printf("%d\n", op_func(oper1, oper2));
return (0);
}
