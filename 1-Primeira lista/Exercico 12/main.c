#include <stdio.h>
#include <stdlib.h>

/*12º - Exercício: Crie o fluxograma e o programa em C
 que leia o valor de tensão elétrica em um resistor de
  800 Ω e calcule a corrente elétrica que passa por ele,
   imprimindo o resultado na tela.*/
int main()
{
    float v,i;
    printf("Insira o valor da tensao: \n");
    scanf("%f",&v);
    i=v/800;
    printf("Valor da corrente: %.2f",i);
    return 0;
}
