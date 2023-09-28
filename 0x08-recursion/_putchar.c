#include <unistd.h>
int _putcahr(char c)
{
return (write(1 ,&c , 1));
}
