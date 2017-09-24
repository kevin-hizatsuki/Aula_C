#include <stdio.h>
#include <stdlib.h>

/*5º - Exercício: Crie o fluxograma e o programa em C que leia
 a medida dos três lados de um triângulo e determine se o triângulo
  é equilátero, isósceles ou escaleno, imprimindo o resultado na tela. */
int main()
{
    int lado1,lado2,lado3;
    printf("Digite os lados dos triângulos:\n");
    printf("1 lado:");
    scanf("%d",&lado1);
    printf("2 lado:");
    scanf("%d",&lado2);
    printf("3 lado:");
    scanf("%d",&lado3);
    if ((lado1==lado2) &&(lado1==lado3)&&(lado2==lado3))
        {
        printf("E um triangulo equilatero.\n");
        }
    if ((lado1!=lado2) &&(lado1!=lado3)&&(lado2!=lado3))
        {
        printf("E um triangulo escaleno");
        }
    else
        {
        printf("E um triangulo isosceles");
        }
    return 0;
}
