#include <stdio.h>
#include <stdlib.h>

/* 2º - Exercício: Crie o fluxograma e o programa em C que leia a largura e o
 comprimento de um retângulo e calcule o perímetro e área, imprimindo o
 resultado na tela.*/
int main()
{
    int largura, comprimento,area,perimetro;
    printf("Digite a largura do retângulo:\n");
    scanf("%d",&largura);
    printf("Digite o comprimento do retângulo:\n");
    scanf("%d",&comprimento);
    area=largura*comprimento;
    perimetro=largura*2+comprimento*2;
    printf("\nArea=%d \n Perimetro=%d\n",area,perimetro);
    system("Pause");
    return 0;
}
