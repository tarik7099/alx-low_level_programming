#include <stdio.h>
#include "main.h"
/**
 * swap_int -  function that swaps the values of two integers.
 *  @a:int parameter 1
 *  @b:int parameter 2
 *  Return: Nothing
 */
void swap_int(int *a, int *b)
{
int sps;
sps = *a;
*a = *b;
*b = sps;
}
