#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=16,y=3;
    float resultado;

    resultado = (float) x/y; //Estamos forçando com que o valor de x passe a ser float, deixando de ser int.

    printf("%f",resultado);

    return 0;
}
