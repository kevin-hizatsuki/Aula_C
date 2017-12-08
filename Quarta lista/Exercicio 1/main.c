#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoas{
char nome[31];
int idade;
} PESSOA;


int main()
{
    PESSOA qualquer[10];
    int i;

    for(i=0;i<10;i++){
        printf("Insira o %i nome: ",i+1);
        fflush(stdin);
        gets(qualquer[i].nome);
        printf("Insira a sua idade: ");
        scanf("%i",&qualquer[i].idade);
    }
    for(i=0;i<10;i++)
        printf("\nO %i nome: %s.\nIdade: %i.",i+1,qualquer[i].nome,qualquer[i].idade);



    return 0;
}
