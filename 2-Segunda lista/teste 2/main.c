#include <stdio.h>

int main(){

   float vetor[100], mediana, aux;
   int i, j, valores;

   printf("-- Calculo da Mediana --\n");
   do{
        printf("Informe quantos valores deseja verificar: ");
        scanf("%d",&valores);
    } while(valores >= 100);

    for(i=0;i<valores;i++){
        printf("\nInforme o valor %d: ", i+1);
        scanf("%f", &vetor[i]);
    }

    for(i=0;i<valores;i++){
        for(j=0;j<valores;j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    if(valores%2){
        mediana = vetor[valores/2];
    } else {
        mediana = (vetor[valores/2-1]+vetor[valores/2])/2;
    }

    printf("\nO valor da mediana e: %2.2f\n", mediana);
    system("pause");
    return(0);
}
