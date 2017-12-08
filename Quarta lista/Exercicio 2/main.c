#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

typedef struct Dado{
    char nome[50];
    char Rg[20];
    int anodenascimento;
}Pessoa;

Pessoa qualquer[10];
int contador=0;
int ANO;

void Cadastrar(){
    char n[50];
    char rg[20];
    printf("\nInsira o nome: ");
    fflush(stdin);
    gets(n);
    strcpy(qualquer[contador].nome,n);
    printf("\nInsira o Rg: ");
    gets(rg);
    strcpy(qualquer[contador].Rg,rg);
    printf("\nInsira o ano de nascimento: ");
    scanf("%i",&qualquer[contador].anodenascimento);
    contador++;
}

void CalcularIdade(){
    char dateStr [9];
    char nome[50];
    int i,ret;
     _strdate(dateStr);
     ANO=2000+((dateStr[6]-48)*10)+((dateStr[7]-48));
     printf("\nDeseja calcular idade de quem: ");
     fflush(stdin);
     gets(nome);
     for(i=0;i<contador;i++){
        ret=strcmp(nome,qualquer[i].nome);
        if (ret==0){
            printf("O ano do %s e igual a : %i\n",nome,ANO-qualquer[i].anodenascimento);
        }
        else
            printf("Nao encontrado\n");
     }
}

void ListarPessoas(){
    int anoLimite,i;
    printf("\nDeseja listar pessoas que nasceram a partir de que ano: ");
    scanf("%i",&anoLimite);
    for(i=0;i<contador;i++){
        if (qualquer[i].anodenascimento>=anoLimite){
            printf("Nome :%s\n",qualquer[i].nome);
            //printf("Rg: %s\n",qualquer[i].Rg);
        }
    }
}

void ListarPessoasAntes(){
    int anoLimite,i;
    printf("\nDeseja listar pessoas que nasceram antes de que ano: ");
    scanf("%i",&anoLimite);
    for(i=0;i<contador;i++){
        if (qualquer[i].anodenascimento<anoLimite){
            printf("Nome :%s\n",qualquer[i].nome);
            //printf("Rg: %s\n",qualquer[i].Rg);
        }
    }
}

void ProcurarRg(){
    char rg[20];
    int i,ret;
    ret=0;
    printf("\nInsira o rg: ");
    fflush(stdin);
    gets(rg);
    for(i=0;i<contador;i++){
        if(strcmp(rg,qualquer[i].Rg)==0){
            printf("\nNome: %s",qualquer[i].nome);
            ret++;
        }
    }
    if (ret==0){
        printf("\nNao encontrado");
    }
}

int main()
{
    char op;
    while(op!='S'){
        printf("\n=======Menu=======\n");
        printf("A-Cadastrar\nB-Calcular a idade\nC-Listar pessoas que nasceram a partir de um determinado ano\nD-Listar pessoas que nasceram antes de um determinado ano\nE-Encontrar o nome de uma pessoa com Rg\nS-Sair");
        printf("\nEscolha as opcoes a cima: ");
        op=getche();
        op=toupper(op);
        switch(op){
            case 'A':
                Cadastrar();
                break;
            case 'B':
                CalcularIdade();
                break;
            case 'C':
                ListarPessoas();
                break;
            case 'D':
                ListarPessoasAntes();
                break;
            case 'E':
                ProcurarRg();
                break;
        }
        if (op=='S'){
            break;
        }
    }
    return 0;

}
