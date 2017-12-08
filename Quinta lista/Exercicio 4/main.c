#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

typedef struct dados
{
    char nome[50];
    char rg[20];
    int anoNasc;
    struct dados *proximo;
} *PESSOA;
int ANO;

void addPessoa(PESSOA *local)
{
    PESSOA novo;
    novo = (PESSOA)malloc(sizeof(struct dados));
    if(novo !=NULL)
    {
        printf("\nDigite o nome: ");
        fflush(stdin);
        gets((*novo).nome);
        printf("\nDigite o rg: ");
        fflush(stdin);
        gets((*novo).rg);
        printf("\nDigite o ano de nascimento: ");
        fflush(stdin);
        scanf("%i",&((*novo).anoNasc));
        novo->proximo=*local;
        *local = novo;
    }
}
void CalcularIdade(PESSOA local){
    char dateStr [9];
    char nome[50];
    int i,ret;
    int conf=0;
     _strdate(dateStr);
     ANO=2000+((dateStr[6]-48)*10)+((dateStr[7]-48));
     printf("\nDeseja calcular idade de quem: ");
     fflush(stdin);
     gets(nome);
     while(local!=NULL)
        {
            ret= strcmp(nome,local->nome);
            if (ret==0){
                printf("O ano do %s e igual a : %i\n",nome,ANO-local->anoNasc);
                conf++;
            }
            local=local->proximo;
        }
    if (conf==0){
        printf("\nNao encontrado");
    }
}

void ListarPessoaApAn(PESSOA local)
{
    int ano;
    int conf=0;
    printf("\nA partir de qual ano deseja listar: ");
    scanf("%i",&ano);
    while (local!=NULL)
           {
                    if (local->anoNasc>ano){
                    printf("Nome: %s\n", local->nome);
                    printf("RG: %s\n", local->rg);
                    printf("Ano de Nascimento: %i\n", local->anoNasc);
                    conf++;
                    }
                    local=local->proximo;
           }
    if (conf==0){
        printf("\nNao ha pessoas nascidas no ano de %i",ano);
    }
}

void ListarPessoaApDep(PESSOA local)
{
    int ano;
    int conf=0;
    printf("\nA partir de qual ano deseja listar: ");
    scanf("%i",&ano);
     while (local!=NULL)
           {
                    if (local->anoNasc<ano){
                    printf("Nome: %s\n", local->nome);
                    printf("RG: %s\n", local->rg);
                    printf("Ano de Nascimento: %i\n", local->anoNasc);
                    conf++;
                    }
                    local=local->proximo;
           }
    if (conf==0){
        printf("\nNao ha pessoas nascidas no ano de %i",ano);
    }
}

void acharPessoaRG(PESSOA local){
    char RG[20];
    int i,ret;
    int conf=0;
     printf("\nInsira o RG: ");
     fflush(stdin);
     gets(RG);
     while(local!=NULL)
        {
            ret= strcmp(RG,local->rg);
            if (ret==0){
                printf("O dono do rg %s e: %s\n",RG,local->nome);
                conf++;
            }
            local=local->proximo;
        }
    if (conf==0){
        printf("\nNao encontrado");
    }
}

int main()
{
    PESSOA acervo=NULL;
    char op;
    setlocale(LC_ALL,"Portuguese");
    do
    {
        printf("\nA-Cadastrar\nB-Calcuçar idade da pessoa selecionada\nC-Listar pessoas que nasceram a partir de um determinado ano\nD-Listar pessoas que nasceram antes de um determinado ano\nE-Encontrar o nome de uma pessoa com determinado RG\nF-Sair\n");
        op=getche();
        op=toupper(op);
        switch(op){
            case 'A':
                addPessoa(&acervo);
                break;
            case 'B':
                CalcularIdade(acervo);
                break;
            case 'C':
                ListarPessoaApAn(acervo);
                break;
            case 'D':
                ListarPessoaApDep(acervo);
                break;
            case 'E':
                acharPessoaRG(acervo);
                break;
        }
    }while(op!='F');
    return 0;
}
