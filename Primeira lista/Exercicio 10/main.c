#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 10� - Exerc�cio: Crie o fluxograma e o programa em C que leia
 o tamanho do raio de um c�rculo do e calcule o per�metro e �rea,
  imprimindo o resultado na tela.*/
int main()
{
    float r,c,a;
    printf("Insira o raio do circulo: \n");
    scanf("%f",&r);
    c=M_PI*2*r;
    a=M_PI*pow(r,2);
    printf("Perimetro: %.2f\n",c);
    printf("Area: %.2f \n",a);
    return 0;
}
