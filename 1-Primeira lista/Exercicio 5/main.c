#include <stdio.h>
#include <stdlib.h>

/*5� - Exerc�cio: Crie o fluxograma e o programa em C que leia
 a medida dos tr�s lados de um tri�ngulo e determine se o tri�ngulo
  � equil�tero, is�sceles ou escaleno, imprimindo o resultado na tela. */
int main()
{
    int lado1,lado2,lado3;
    printf("Digite os lados dos tri�ngulos:\n");
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
