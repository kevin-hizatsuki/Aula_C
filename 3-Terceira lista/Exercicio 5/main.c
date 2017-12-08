#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char alfabeto[][1] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","X","W","Y","Z"};
char ordem[][10]={"primeiro","segundo","terceiro","quarto","quinto"};
char *p;
char letra[4][1];
int ordem_n[4][1];
char ordem_nome[5][20];

void selecao(char nome[5][20],int n){
    int menor,aux,i,j,cont=0;

    while(cont<5){
    i=0;
    while(nome[i][0]=='\0') i++;
    if(i<4){
            menor=i;
        for (j=i+1;j<n;j++){

            printf("\nMenorinicial =%d",menor);
            while(nome[j][0]=='\0')j++;
            if (nome[menor][0]>nome[j][0]){
                menor=j;
                printf("\nMenor =%d",menor);
                }
        }}
        printf("\nMenor final =%d",menor);
        strcpy(ordem_nome[cont],nome[menor]);
        nome[menor][0]='\0';
        cont++;


    }
    for(i=0;i<n;i++){
        if (nome[i][0]!='\0'){
            strcpy(ordem_nome[cont],nome[i]);
        }
    }
}




int main()
{
    char nome[5][20], cont=0,i;
    int n=5;

        /*for (cont=0;cont<=4;cont++){
            printf("Insira o %s nome",ordem[cont]);
            scanf("%s",&nome[cont]);}*/

        while(cont<=4){
            printf("Insira o %s nome: ",ordem[cont]);
            gets(nome[cont]);
            nome[cont][0]=toupper(nome[cont][0]);
            cont=cont+1;
        }

        /*for (cont=0;cont<=4;cont++)
            printf("%s",nome[cont]);*/


        selecao(nome,n);

        for(i=0;i<n;i++){
            printf("\n%s\n",ordem_nome[i]);
        }

    return 0;
}
