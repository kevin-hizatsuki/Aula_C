#include <stdio.h>
#include <stdlib.h>

/*4� - Exerc�cio: Crie o fluxograma e o programa em C que leia a medida
 dos tr�s lados de um tri�ngulo e determine se o per�metro � maior que
  10, imprimindo o resultado na tela. */
int main()
{
    int lado1,lado2,lado3,perimetro;
    printf("Digite os lados dos tri�ngulos:\n");
    printf("1 lado:");
    scanf("%d",&lado1);
    printf("2 lado:");
    scanf("%d",&lado2);
    printf("3 lado:");
    scanf("%d",&lado3);
    perimetro=lado1+lado2+lado3;
    if (perimetro>10)
        printf("O perimetro e maior que 10, perimetro igual a: %d.\n",perimetro);
    else
        printf("O perimetro e menor que 10, perimetro igual a: %d.\n",perimetro);
    return 0;
}
