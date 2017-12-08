#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*6º - Exercício: Crie o fluxograma e o programa em C que leia a medida
 dos três lados de um triângulo e determine se o triângulo é acutângulo,
  obtusângulo ou retângulo, imprimindo o resultado na tela.*/
int main()
{
    int lado1,lado2,lado3;
    printf("Digite o maior lado do triângulo:\n");
    printf("1 lado:");
    scanf("%d",&lado1);
    printf("Digite os lados menores: \n");
    printf("2 lado:");
    scanf("%d",&lado2);
    printf("3 lado:");
    scanf("%d",&lado3);
    if (lado1>lado2 && lado1>lado3)
    {
        if (pow(lado1,2)==pow(lado2,2)+pow(lado3,2))
        {
            printf("E um triangulo retangulo. \n");
        }
        else if (pow(lado1,2)<pow(lado2,2)+pow(lado3,2))
        {
            printf("E um triangulo acutangulo. \n");
        }
        else if (pow(lado1,2)>pow(lado2,2)+pow(lado3,2))
        {
            printf("E um triangulo obtusangulo. \n");
        }
    }
    else
    {
        printf("Erro! Digite o lado maior primeiro");
    }
    return 0;
}
