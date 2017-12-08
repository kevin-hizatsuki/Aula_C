#include <stdio.h>
#include <stdlib.h>
#include "ordenado.h"

//using namespace std;
/*int main()
{
    char nm[5][20], aux[20];
    int i,j;

for (i = 0; i < 5; i++) {
   printf("\nNome %i: ", i+1);
   scanf("%s", nm[i]);
}*/


int main()
{
    int i,j,k;
    printf("Insira: ");
    scanf("%i",&j);
    char vetor[j][1000];
    for (i=0;i<j;i++){
        printf("Insira a %i nome\n",i+1);
        //scanf("%s",&vetor[i]);
        fflush(stdin);
        gets(vetor[i]);

    }

    ordenacao(j,vetor);

    /*for(k=0;k<j;k++){
        printf("\nsA %i e igual a: %s",k,vetor[k]);*/


    return 0;
}
