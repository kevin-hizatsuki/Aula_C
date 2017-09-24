#include <stdio.h>
#include <stdlib.h>

/*1º - Exercício: Crie o fluxograma e o programa em C
que leia o tamanho do lado de um quadrado e calcule o
 perímetro e área, imprimindo o resultado na tela.
*/
//Teste github

int calc_per(int lado){
    return (4*lado);
}
int area_qua(int lado){
    return (lado*lado);
}
int area_maior_10(int lado)
{
    if (area_qua(lado)>10)
        return 1;
    else
        return 0;
}
void perim_menor_10 (int lado){
    if (calc_per(lado)>10)
        printf("O perimetro e maior que 10.\n");
    else
        printf("O perimetro e menor que 10\n");
    }
int main()
{
    int lado,perimetro,area;
    printf("Digite a medida do lado: \n");
    scanf("%d",&lado);
    perimetro=calc_per(lado);
    area=area_qua(lado);
    printf("\n Area=%d \n Perimetro=%d\n",area,perimetro);
    printf("%d\n",area_maior_10(lado));
    perim_menor_10(lado);
    system("Pause");
    return 0;
}
