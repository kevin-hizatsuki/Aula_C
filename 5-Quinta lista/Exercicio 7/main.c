#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, x=5;
    p=&x;
    *p *= 2**p;
    printf("%d", x);
    return 0;
}
