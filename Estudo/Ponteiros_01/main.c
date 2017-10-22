#include <stdio.h>
#include <stdlib.h>

main()
{
    int x;
    x=10;
    int *ponteiro;
    ponteiro= &x;
    int y = 20;
    *ponteiro = y; //Ela atibui ao valor da memoria do x o valor de y.

    printf("%i %i\n", x,y);

}
