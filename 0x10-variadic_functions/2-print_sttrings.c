#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function Prints strings followed by a new line.
 * @separator: The string 
 * @n: The number of strings passed 
 * ...: The variable-length list of parameters (strings).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned i;
va_start(strings, n);
for (i = 0; i < n; i++)
{
        str = va_arg(strings, char *);
        if (str == NULL)
	{
            printf("(nil)");
        }
	else
	{
            printf("%s", str);
        }
        if (i < n - 1 && separator != NULL)
	{
            printf("%s", separator);
        }
    }

    va_end(strings);
    printf("\n");
}

