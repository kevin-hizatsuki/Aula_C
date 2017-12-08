#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*9º - Exercício: Crie o fluxograma e o programa em C
 que leia os coeficientes a, b e c de uma função de
 2º grau e calcule x para y=0, imprimindo o resultado
  na tela.*/
int main()
{
    int a,b,c,bhaskara;
    float x1,x2;
    printf("Insira o coeficiente a: \n");
    scanf("%i",&a);
    printf("Insira o coeficiente b: \n");
    scanf("%i",&b);
    printf("Insira o coeficiente c: \n");
    scanf("%i",&c);
    bhaskara=pow(b,2)-4*a*c;
    if (bhaskara<0)
    {
        printf("Nao e possivel calcular,pois bhaskara<0\n");
    }
    else
    {
        x1=(-b+sqrt(bhaskara))/2*a;
        x2=(-b-sqrt(bhaskara))/2*a;
        printf("O valor de x1: %i \n",x1);
        printf("O valor de x2: %i \n",x2);
    }

    return 0;
}
