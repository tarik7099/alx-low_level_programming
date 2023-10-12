#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user.
 * @s: The operator as a string.
 * Return: A pointer to the function that corresponds to the operator,
 * or NULL if not found.
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
while (ops[i].op != NULL)
{
if (ops[i].op[0] == s[0] && s[1] == '\0')
{
return (ops[i].f);
	}
		i++;
	}
return (NULL);
}
