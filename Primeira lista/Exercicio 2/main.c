#include <stdio.h>
#include <stdlib.h>

/* 2� - Exerc�cio: Crie o fluxograma e o programa em C que leia a largura e o
 comprimento de um ret�ngulo e calcule o per�metro e �rea, imprimindo o
 resultado na tela.*/
int main()
{
    int largura, comprimento,area,perimetro;
    printf("Digite a largura do ret�ngulo:\n");
    scanf("%d",&largura);
    printf("Digite o comprimento do ret�ngulo:\n");
    scanf("%d",&comprimento);
    area=largura*comprimento;
    perimetro=largura*2+comprimento*2;
    printf("\nArea=%d \n Perimetro=%d\n",area,perimetro);
    system("Pause");
    return 0;
}
