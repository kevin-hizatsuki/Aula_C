#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 7º - Exercício: Crie o fluxograma e o programa em C
 que leia peso e altura de uma pessoa e calcule o IMC,
  imprimindo o resultado na tela.*/
int main()
{
    float h,p,imc;
    printf("Digite a sua altura: \n");
    scanf("%f",&h);
    printf("Digite o seu peso: \n");
    scanf("%f",&p);
    imc=p/(pow(h,2));
    if (imc<18.5)
    {
        printf("Esta abaixo do peso.\n");
    }
    else if (imc>18.6 && imc<24.9)
    {
        printf("Esta no peso ideal.\n");
    }
    else if (imc>25.0 && imc<29.9)
    {
        printf("Levemente acima do peso.\n");
    }
    else if (imc>30.0 && imc<34.9)
    {
        printf("Obesidade grau I.\n");
    }
    else if (imc>35.0 && imc<39.9)
    {
        printf("Obesidade grauII(severa)\n");
    }
    else if (imc>40.0)
    {
        printf("Obesidade grau III(morbida)");
    }
    return 0;
}
