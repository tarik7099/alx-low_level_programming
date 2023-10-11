#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that  Prints a name using a provided function.
 * @name: The name of printed
 * @f: A function pointer that specifies how to print the name.
 */
void print_name(char * name, void(*f)(char*))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
