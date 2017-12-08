#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#import <stdbool.h>

typedef struct dadosAer{
    char numero_vooAe[10];
    char ciaAerea[20];
    char Modelo_Aeronave[20];
    struct dadosAer *prox;
}*Modelo;

typedef struct dadosVoo{
    char numero_vooVo[10];
    char origem[20];
    char destino[20];
    int qtdeTotalAssentos;
    int qtdeAssentosOcupados;
    bool cancelar;
    struct dadosVoo *prox;
}*Voo;

typedef struct dadosPessoa{
    char nome[50];
    char rg[20];
    int qntVoo;
    char NumV[10];
    bool canc;
    struct dadosPessoa *prox;
}*PESSOA;

void incluirVoo(Voo *local)
{
    Voo novo;
    novo = (Voo)malloc(sizeof(struct dadosVoo));
    if(novo!=NULL)
    {
        printf("\n\n\nDigite o numero do voo: ");
        fflush(stdin);
        gets(novo->numero_vooVo);
        printf("\nDigite a origem do voo: ");
        fflush(stdin);
        gets(novo->origem);
        printf("\nDigite o destino do voo: ");
        fflush(stdin);
        gets(novo->destino);
        printf("\nDigite a quantidade total de acentos: ");
        fflush(stdin);
        scanf("%i",&novo->qtdeTotalAssentos);
        printf("\nDigite a quantidade de acentos ocupados: ");
        fflush(stdin);
        scanf("%i",&novo->qtdeAssentosOcupados);
        novo->cancelar=true;
        novo->prox=*local;
        *local=novo;
    }
}

void incluirAer(Modelo *local)
{
    Modelo novo;
    novo = (Modelo)malloc(sizeof(struct dadosAer));
    if (novo!=NULL)
    {
        printf("\n\n\nDigite a companhia aerea: ");
        fflush(stdin);
        gets(novo->ciaAerea);
        printf("\nDigite o modelo da aeronave: ");
        fflush(stdin);
        gets(novo->Modelo_Aeronave);
        printf("\nDigite o numero do voo: ");
        fflush(stdin);
        gets(novo->numero_vooAe);
        novo->prox=*local;
        *local=novo;
    }
}

void ListarVoo(Voo local)
{
    printf("\n======Lista de Voo=====\n");
    while(local!=NULL)
    {
        if(local->cancelar==true){
        printf("\nNumero voo:%s ",local->numero_vooVo);
        printf("\nOrigem:%s ",local->origem);
        printf("\nDestino:%s ",local->destino);
        printf("\nNumero total de acentos:%i ",local->qtdeTotalAssentos);
        printf("\nNumero de aacentos ocupados:%i ",local->qtdeAssentosOcupados);
        printf("\nO voo esta: %i ",local->cancelar);
        printf("\n--------------------------------------\n");
        local=local->prox;
        }
        else {local=local->prox;}
    }
}

void ListarPessoa(PESSOA local)
{
    printf("\n======Lista de pessoas=====\n");
    while(local!=NULL)
    {
        if(local->canc==true){
        printf("\nNome: %s ",local->nome);
        printf("\nRg: %s ",local->rg);
        printf("\nNumero do voo: %s ",local->NumV);
        printf("\nNumero de acentos comprados:%i ",local->qntVoo);
        printf("\n--------------------------------------\n");
        local=local->prox;
        }
        else{local=local->prox;}
    }
}

void cadastrarPessoa(PESSOA *local,char numeroV[10],int quant){
    PESSOA novo;
    novo = (PESSOA)malloc(sizeof(struct dadosPessoa));
    if(novo !=NULL)
    {
        printf("\nDigite o nome: ");
        fflush(stdin);
        gets((*novo).nome);
        printf("\nDigite o rg: ");
        fflush(stdin);
        gets((*novo).rg);
        strcpy(novo->NumV,numeroV);
        novo->qntVoo=quant;
        novo->canc=true;
        novo->prox=*local;
        *local = novo;
    }
}

int reservarAssento(Voo localV,char numeroV[10])
{

    int res,quant=0;
    int conf=0;

        while(localV!=NULL)
        {
               res=strcmp(numeroV,localV->numero_vooVo);
                if (res==0){
                    if(localV->cancelar==true)
                    printf("\nNumero total de assentos disponiveis:%i ",localV->qtdeTotalAssentos);
                    printf("\nDeseja comprar quantos assentos: ");
                    scanf("%i",&quant);
                    if(quant>localV->qtdeTotalAssentos) printf("\nNao ha tantos assentos disponiveis...");

                    conf++;

                    }
                localV=localV->prox;
       }
    if (conf==0) printf("\nNao encontrado");

return quant;
}

void subCompra(Voo local,int quant,char numeroV[10]){
    int res=0;
    while(local!=NULL){
    res=strcmp(numeroV,local->numero_vooVo);
    if (res==0){local->qtdeTotalAssentos=local->qtdeTotalAssentos-quant;}
    local=local->prox;
    }
}

void somaCompra(Voo local,int quant,char numeroV[10]){
    int res=0;
    while(local!=NULL){
    res=strcmp(numeroV,local->numero_vooVo);
    if (res==0){local->qtdeAssentosOcupados=local->qtdeAssentosOcupados+quant;}
    local=local->prox;
    }
}

void cancelarVoo(Voo V){
    char vooC[10];
    int conf=0;
    printf("\nDeseja cancelar qual voo: ");
    fflush(stdin);
    gets(vooC);
    while(V!=NULL){
        if(strcmp(V->numero_vooVo,vooC)==0){
        if(V->cancelar == true){
            V->cancelar=false;
            conf++;
        }
        }
        V=V->prox;
    }
    if(conf==0){
        printf("\nNao exite este voo cadastrado.");
    }
}

int cancelarPassagem(Voo localV,PESSOA localP)
{
    char nome[50],rg[20];
    int canc=0;
    printf("\nInsira o seu nome: ");
    fflush(stdin);
    gets(nome);
    printf("\nInsira o seu rg: ");
    fflush(stdin);
    gets(rg);
    while(localP!=NULL){
        if ((strcmp(localP->nome,nome)==0) && (strcmp(localP->rg,rg)==0)){
            canc=localP->qntVoo;
            //localP->canc=false;
            return canc;
        }
    }
    return canc;
}

void adicCanc(Voo localV,PESSOA localP,int numeroCanc)
{
    char nome[50],rg[20];
    printf("\nConfirme o seu nome para cancelar a passagem: ");
    fflush(stdin);
    gets(nome);
    printf("\nConfirme o seu rg: ");
    fflush(stdin);
    gets(rg);
    while(localP!=NULL){
        if ((strcmp(localP->nome,nome)==0) && (strcmp(localP->rg,rg)==0)){
        localP->canc=false;
        }
}
}

void somaCanc(Voo local,int quant,char numeroV[10]){
    int res=0;
    while(local!=NULL){
    res=strcmp(numeroV,local->numero_vooVo);
    if (res==0){local->qtdeTotalAssentos=local->qtdeTotalAssentos+quant;}
    local=local->prox;
    }
}

void subtCanc(Voo local,int quant,char numeroV[10]){
    int res=0;
    while(local!=NULL){
    res=strcmp(numeroV,local->numero_vooVo);
    if (res==0){local->qtdeAssentosOcupados=local->qtdeAssentosOcupados-quant;}
    local=local->prox;
    }
}

int main()
{
    Modelo acervoAr = NULL;
    Voo acervoVoo = NULL;
    PESSOA  acervoPes = NULL;
    int quantC,quantCanc;
    char op;
    char numeroV[10],numeroR[10];
    setlocale(LC_ALL,"Portuguese");
    do{
        printf("\n======Menu de Opcoes======\n");
        printf("\nA-Incluir voo\nB-Listar voos\nC-Reservar acento em um voo\nD-Cancelar voo\nE-Cancelar passagem\nF-Incluir Aeronaves\nG-Listar pessoas\nH-Sair\n");
        op=getche();
        op=toupper(op);
        switch(op){
            case 'A':
                incluirVoo(&acervoVoo);
                break;
            case 'B':
                ListarVoo(acervoVoo);
                break;
            case 'C':
                //cadastrarPessoa(&acervoPes);
                printf("\nDigite o numero de voo desejado: ");
                fflush(stdin);
                gets(numeroV);
                quantC=reservarAssento(acervoVoo,numeroV);
                cadastrarPessoa(&acervoPes,numeroV,quantC);
                printf("\nQuantidade: %i",quantC);
                if (quantC!=0){
                subCompra(acervoVoo->numero_vooVo,quantC,numeroV);
                somaCompra(acervoVoo->numero_vooVo,quantC,numeroV);
                }
                break;
            case 'D':
                cancelarVoo(acervoVoo);
                break;
            case 'E':
                quantCanc=cancelarPassagem(acervoVoo,acervoPes);
                printf("\nQuantidade cancelada: %i",quantCanc);
                printf("\nDigite o numero de voo para cancelar: ");
                fflush(stdin);
                gets(numeroV);
                somaCanc(acervoVoo->numero_vooVo,quantCanc,numeroV);
                subtCanc(acervoVoo->numero_vooVo,quantCanc,numeroV);
                break;
            case 'F':
                incluirAer(&acervoAr);
                break;
            case 'G':
                ListarPessoa(acervoPes);
                break;
        }

    } while(op!='H');
    return 0;
}
