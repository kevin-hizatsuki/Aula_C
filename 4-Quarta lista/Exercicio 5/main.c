#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
    char nomeCrianca[50];
    char nomePai[50];
    char nomeMae[50];
    int dia,mes,ano;
    char horaNasc[6];
    float massa;
    float altura;
}Pessoa;
struct dados qualquer[100];
int contador=0;
void cadastrar(){

    char nomeBB[50];
    char nomeP[50];
    char nomeM[50];
    char horaN[6];
    int diaN,mesN,anoN;
    float MassaBB,AlturaBB;
    printf("\nInsira o nome do bebe: ");
    fflush(stdin);
    gets(nomeBB);
    strcpy(qualquer[contador].nomeCrianca,nomeBB);
    printf("\nInsira o nome do pai: ");
    fflush(stdin);
    gets(nomeP);
    strcpy(qualquer[contador].nomePai,nomeP);
    printf("\nInsira o nome da mae: ");
    fflush(stdin);
    gets(nomeM);
    strcpy(qualquer[contador].nomeMae,nomeM);
    printf("\nInsira o dia que o bebe nasceu: ");
    fflush(stdin);
    scanf("%i",&diaN);
    qualquer[contador].dia=diaN;
    printf("\nInsira o mes que o bebe nasceu: ");
    fflush(stdin);
    scanf("%i",&mesN);
    qualquer[contador].mes=mesN;
    printf("\nInsira o ano que o bebe nasceu: ");
    fflush(stdin);
    scanf("%i",&anoN);
    qualquer[contador].ano=anoN;
    printf("\nInsira o hora de nascimento: ");
    fflush(stdin);
    gets(horaN);
    strcpy(qualquer[contador].horaNasc,horaN);
    printf("\nInsira a massa do bebe: ");
    fflush(stdin);
    scanf("%f",&MassaBB);
    qualquer[contador].massa=MassaBB;
    printf("\nInsira a altura do bebe: ");
    fflush(stdin);
    scanf("%f",&AlturaBB);
    qualquer[contador].altura=AlturaBB;
    contador++;
}

void listarBBData(){
    int diaNa,mesNa,anoNa;
    printf("\nInsira o dia de nascimento: ");
    fflush(stdin);
    scanf("%i",&diaNa);
    printf("\nInsira o mes de nascimento: ");
    fflush(stdin);
    scanf("%i",&mesNa);
    printf("\nInsira o ano de nascimento: ");
    fflush(stdin);
    scanf("%i",&anoNa);
    int i;
    int confirmacao=0;
    for(i=0;i<contador;i++){
        if ((diaNa==qualquer[i].dia)&&(mesNa==qualquer[i].mes)&&(anoNa==qualquer[i].ano)){
            printf("\nNome bebe: %s",qualquer[i].nomeCrianca);
            confirmacao++;
        }
    }
    if (confirmacao==0){
        printf("\n\nNao existe nenhum bebe que nasceu nesta data");
    }
}

void MassaAbaixo(){
    float Abaixo;
    printf("\nInforme a massa do bebe que deseja pesquisar: ");
    scanf("%f",&Abaixo);
    int i;
    int confirmacao=0;
    for(i=0;i<contador;i++){
        if (qualquer[i].massa<Abaixo){
            printf("\nNome: %s",qualquer[i].nomeCrianca);
            printf("\nMassa: %.2f\n",qualquer[i].massa);
            confirmacao++;
        }
    }
    if (confirmacao==0){
        printf("\nNao ha criancas abaixo dessa massa.");
    }
}

void MassaAcima(){
    float Acima;
    printf("\nInforme a massa do bebe que deseja pesquisar: ");
    scanf("%f",&Acima);
    int i;
    int confirmacao=0;
    for(i=0;i<contador;i++){
        if (qualquer[i].massa>Acima){
            printf("\nNome: %s",qualquer[i].nomeCrianca);
            printf("\nMassa: %.2f\n",qualquer[i].massa);
            confirmacao++;
        }
    }
    if (confirmacao==0){
        printf("\nNao ha criancas acima dessa massa.");
    }
}

int main()
{
    char op;

    do
    {
        printf("\n====Maternidade====\n\n");
        printf("A-Cadastrar\nB-Listar os nomes de todos os bebes nascidos em uma determinada data\nC-Listar os nomes de todos os bebes que nasceram com massa abaixo de determinado valor\nD-Listar os nomes de todos os bebês que nasceram com massa acima dede determinado valor\nS-Sair\n");
        op=getche();
        op=toupper(op);
        switch(op)
        {
            case 'A':
                cadastrar();
                break;
            case 'B':
                listarBBData();
                break;
            case 'C':
                MassaAbaixo();
                break;
            case 'D':
                MassaAcima();
                break;
        }
    }while(op!='S');

    return 0;
}
