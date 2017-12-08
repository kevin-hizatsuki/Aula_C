#include <stdio.h>
#include <stdlib.h>

/*11º - Exercício: Crie o fluxograma e o programa em C que leia
 o tamanho das diagonais de um losango calcule o perímetro e área,
  imprimindo o resultado na tela. */
int main()
{
    int D,d,area,perimetro;
    printf("Digite diagonal maior do losangulo: \n");
    scanf("%i",&D);
    printf("Digite diagonal menor do losangulo: \n");
    scanf("%i",&d);
    if (D>d)
    {
        area=(D*d)/2;
        perimetro=2*D+2*d;
        printf("Area: %i \nPerimetro: %i",area,perimetro);
    }
    else
    {
        printf("Erro! Digite na ordem descrito!");
    }
    return 0;
}
