#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*3� - Exerc�cio: Crie o fluxograma e o programa em C que leia a medida
 dos tr�s lados de um tri�ngulo e calcule o per�metro e �rea, imprimindo
  o resultado na tela.  */

int main()
{
    int lado1,lado2,lado3,area,semiperimetro,perimetro;
    printf("Digite os lados dos tri�ngulos:\n");
    printf("1 lado:");
    scanf("%d",&lado1);
    printf("2 lado:");
    scanf("%d",&lado2);
    printf("3 lado:");
    scanf("%d",&lado3);
    perimetro=lado1+lado2+lado3;
    semiperimetro=(lado1+lado2+lado3)/2;
    area=sqrt((semiperimetro)*(semiperimetro-lado1)*(semiperimetro-lado2)*(semiperimetro-lado3));
    printf("\nArea=%d \n Perimetro=%d\n",area,perimetro);
    system("Pause");
    return 0;
}
