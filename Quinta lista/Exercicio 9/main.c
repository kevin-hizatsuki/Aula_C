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
}Modelo;

typedef struct dadosVoo{
    char numero_vooVo[10];
    char origem[20];
    char destino[20];
    int qtdeTotalAssentos;
    int qtdeAssentosOcupados;
    bool cancelar;
}Voo;

typedef struct dadosPessoa{
    char nome[50];
    char rg[20];
    int qntVoo;
    char NumV[10];
    bool canc;
}PESSOA;

Modelo aviao;
Voo voo;
PESSOA pessoa;

FILE *p_aviao;
FILE *p_voo;

 void abre_arquivo(){
     p_aviao=fopen ("dados_frota.dat","a+b");
        }
void abre_arquivo_voo(){
      p_voo=fopen ("dados_voo.dat","a+b");
         }

void mostrarVoo(){
    printf("\nNumero: %s\nOrigem: %s\nDestino: %s\nQuantidade total assento: %i\nQuntidade assento ocupado: %i\nBoolean: %i\n",voo.numero_vooVo,voo.origem,voo.destino,
           voo.qtdeTotalAssentos,voo.qtdeAssentosOcupados,
           voo.cancelar);
}



void incluirVoo()
{
    system("cls");
    printf("\n\n\nDigite o numero do voo: ");
    scanf("%s",&voo.numero_vooVo);
    printf("\nDigite a origem do voo: ");
    scanf("%s",&voo.origem);
    printf("\nDigite o destino do voo: ");
    scanf("%s",&voo.destino);
    printf("\nDigite a quantidade total de acentos: ");
    scanf("%i",&voo.qtdeTotalAssentos);
    printf("\nDigite a quantidade de acentos ocupados: ");
    scanf("%i",&voo.qtdeAssentosOcupados);
    voo.cancelar=true;
    fseek(p_voo,0,SEEK_END);
    fwrite(&voo, sizeof(Voo),1,p_voo);
}

void incluirAer()
{
    printf("\n\n\nDigite a companhia aerea: ");
    scanf("%s",&aviao.ciaAerea);
    printf("\nDigite o modelo da aeronave: ");
    scanf("%s",&aviao.Modelo_Aeronave);
    printf("\nDigite o numero do voo: ");
    scanf("s",&aviao.numero_vooAe);
    fseek(p_aviao,0,SEEK_END);
    fwrite(&aviao,sizeof(Modelo),1,p_aviao);

}


void listarVoo()
{
    rewind(p_voo);
    printf("\n======Lista de voo=======\n");
    do{
        fread(&voo,sizeof(Voo),1,p_voo);
        if(voo.cancelar==true){
        if (feof(p_voo)==0) mostrarVoo();}
    }while(feof(p_voo)==0);
    getch();
}


void reservarVoo()
{
    char numeroV[10];
    int quant;
    int fim=0;
    int cont=0;
    system("cls");
    printf("\nDigite o numero de voo desejado: ");
    scanf("%s",&numeroV);
    p_voo=fopen("dados_voo.dat","r+b");
    do{
        fread(&voo,sizeof(Voo),1,p_voo);
        if(strcmp(numeroV,voo.numero_vooVo)==0){
            printf("\nQuantidade de assentos disponiveis: %i",voo.qtdeTotalAssentos);
            printf("\nQuantidade de assentos deseja comprar: ");
            scanf("%i",&quant);
            fim=0;
            voo.qtdeAssentosOcupados=voo.qtdeAssentosOcupados+quant;
            voo.qtdeTotalAssentos=voo.qtdeTotalAssentos-quant;
            fseek(p_voo,cont*sizeof(Voo),SEEK_SET);
            fwrite(&voo,sizeof(Voo),1,p_voo);
            break;
        }cont++;
            }while(fim==1);
            printf("reserva feita com sucesso");
            getch();
}

void cancelarVoo()
{
    char numeroV[10];
    int fim=1;
    int cont=0;
    system("cls");
    printf("\nDigite o numero de voo deseja cancelar: ");
    scanf("%s",&numeroV);
    p_voo=fopen("dados_voo.dat","r+b");
    do{
        fread(&voo,sizeof(Voo),1,p_voo);
        if(strcmp(numeroV,voo.numero_vooVo)==0){
            voo.cancelar=false;
            fim=0;
            fseek(p_voo,cont*sizeof(Voo),SEEK_SET);
            fwrite(&voo,sizeof(Voo),1,p_voo);
            break;
        }cont++;
    }while(fim==1);
    printf("\nCancelado com sucesso");
    getch();
}
void cancelarPassagem()
{
    char numeroV[10];
    int quant;
    int cont=0;
    int fim=1;
    system("cls");
    printf("\nDigite o numero de voo deseja cancelar a passagem: ");
    scanf("%s",&numeroV);
    p_voo=fopen("dados_voo.dat","r+b");
    do{
        fread(&voo,sizeof(Voo),1,p_voo);
        if(strcmp(numeroV,voo.numero_vooVo)==0){
            printf("\nQuantas passagem deseja cancelar:");
            scanf("%i",&quant);
            voo.qtdeAssentosOcupados=voo.qtdeAssentosOcupados-quant;
            voo.qtdeTotalAssentos=voo.qtdeTotalAssentos+quant;
            fim=0;
            fseek(p_voo,cont*sizeof(Voo),SEEK_SET);
            fwrite(&voo,sizeof(Voo),1,p_voo);
            break;
            }cont++;
            }while(fim==1);
            printf("\nPassagem cancelada com sucesso");
            getch();
}

int main()
{
    abre_arquivo();
    abre_arquivo_voo();
    int quantC,quantCanc;
    char op;
    char numeroR[10];
    setlocale(LC_ALL,"Portuguese");
    do{
        printf("\n======Menu de Opcoes======\n");
        printf("\nA-Incluir voo\nB-Listar voos\nC-Reservar acento em um voo\nD-Cancelar voo\nE-Cancelar passagem\nF-Incluir Aeronaves\nG-Sair\n");
        op=getche();
        op=toupper(op);
        switch(op){
            case 'A':
                incluirVoo();
                break;
            case 'B':
                listarVoo();
                break;
            case 'C':
                reservarVoo();
                break;
            case 'D':
                cancelarVoo();
                break;
            case 'E':
                cancelarPassagem();
                break;
            case 'F':
                incluirAer();
                break;

        }

    } while(op!='G');
    fclose(p_aviao);
    fclose(p_voo);
    return 0;
}
