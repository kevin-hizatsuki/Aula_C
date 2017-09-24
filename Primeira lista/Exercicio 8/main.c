#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 8º - Exercício: Crie o fluxograma e o programa em C
 que leia os coeficientes a e b de uma função de 1º grau
  e calcule x para y=0 ( y=ax+b), imprimindo o resultado na
   tela.*/
int main()
{
    int a,b;
    float x;
    printf("Insira o coeficiente a: \n");
    scanf("%i",&a);
    printf("Insira o coeficiente b: \n");
    scanf("%i",&b);
    if (a<=b)
    {
        x=-(b)/a;
        printf("x e igual a: %.2f \n",x);
    }
    else
    {
        printf("x e igual a: %i/%i",b,a);
    }
    return 0;
}
