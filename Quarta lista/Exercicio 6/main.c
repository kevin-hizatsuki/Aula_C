#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
    char nomeNoiva[50];
    char nomeNoivo[50];
    char nomePaiNoiva[50];
    char nomeMaeNoiva[50];
    char nomePaiNoivo[50];
    char nomeMaeNoivo[50];
    int dia,mes,ano;
    char horaCerimonia[6];
};

int contador=0;
struct dados qualquer[100];

void Cadastro(){
    printf("\nInsira o nome da noiva: ");
    fflush(stdin);
    gets(qualquer[contador].nomeNoiva);
    printf("\nInsira o nome da noivo: ");
    fflush(stdin);
    gets(qualquer[contador].nomeNoivo);
    printf("\nInsira o nome do pai da noiva: ");
    fflush(stdin);
    gets(qualquer[contador].nomePaiNoiva);
    printf("\nInsira o nome da mae da noiva: ");
    fflush(stdin);
    gets(qualquer[contador].nomeMaeNoiva);
    printf("\nInsira o nome do pai do noivo: ");
    fflush(stdin);
    gets(qualquer[contador].nomePaiNoivo);
    printf("\nInsira o nome da mae do noivo: ");
    fflush(stdin);
    gets(qualquer[contador].nomeMaeNoivo);
    printf("\nInsira o dia do casamento: ");
    fflush(stdin);
    scanf("%i",&qualquer[contador].dia);
    printf("\nInsira o mes do casamento: ");
    fflush(stdin);
    scanf("%i",&qualquer[contador].mes);
    printf("\nInsira o ano do casamento: ");
    fflush(stdin);
    scanf("%i",&qualquer[contador].ano);
    printf("\nInsira a hora do casamento: ");
    fflush(stdin);
    gets(qualquer[contador].horaCerimonia);
    contador++;

}

void ListarCerimonia(){
    int diaC,mesC,anoC;
    printf("\nInsira o dia da cerimonia: ");
    fflush(stdin);
    scanf("%i",&diaC);
    printf("\nInsira o mes da cerimonia: ");
    fflush(stdin);
    scanf("%i",&mesC);
    printf("\nInsira o ano da cerimonia: ");
    fflush(stdin);
    scanf("%i",&anoC);
    int i;
    int condicao=0;
    for(i=0;i<contador;i++){
        if ((diaC==qualquer[i].dia)&&(mesC==qualquer[i].mes)&&(anoC==qualquer[i].ano)){
            printf("\n\nNo dia %i/%i/%i tera o casamento de %s e %s\n",qualquer[i].dia,qualquer[i].mes,qualquer[i].ano,qualquer[i].nomeNoiva,qualquer[i].nomeNoivo);
            condicao++;
        }
    }
    if (condicao==0){
        printf("\nNao ha cerimonia marcado nessa data.\n");
    }
}

void FuturoConj(){
    char FConj[50];
    printf("\nDigite o nome de um dos nubentes: ");
    fflush(stdin);
    gets(FConj);
    int i;
    int comparador;
    for(i=0;i<contador;i++){
        if (strcmp(FConj,qualquer[i].nomeNoiva)==0){
            printf("\nO nome do futuro conjuge sera %s\n",qualquer[i].nomeNoivo);
            comparador++;
        }
        if (strcmp(FConj,qualquer[i].nomeNoivo)==0){
            printf("\nO nome da futura conjuge sera %s\n",qualquer[i].nomeNoiva);
            comparador++;
        }
    }
    if (comparador==0){
        printf("\nNão ha nehum conjuge relacionado\n");
    }
}

void DataCasamento(){
    char nomeNA[50];
    char nomeNO[50];
    printf("\nInsira o nome da noiva: ");
    fflush(stdin);
    gets(nomeNA);
    printf("Insira o nome do noivo: ");
    fflush(stdin);
    gets(nomeNO);
    int i;
    int confirmacao=0;
    for (i=0;i<contador;i++){
        if ((strcmp(nomeNA,qualquer[i].nomeNoiva)==0)&&(strcmp(nomeNO,qualquer[i].nomeNoivo)==0)){
            printf("\nData de casamento: %i/%i/%i\nAs %s",qualquer[i].dia,qualquer[i].mes,qualquer[i].ano,qualquer[i].horaCerimonia);
            confirmacao++;
        }
    }
    if (confirmacao==0){
        printf("\nNao ha casamento marcado\n");
    }
}

int main()
{
    char op;

    do
    {
        printf("\n====Casamento====\n\n");
        printf("A-Cadastrar\nB-Listar todas as cerimonias ocorridas em uma determinada data\nC-Fornecer o nome do futuro conjuge, a partir do nome de um dos nubentes\nD-Fornecer a data e o horario da cerimonia, a partir dos nomes dos noivos.\nS-Sair\n");
        op=getche();
        op=toupper(op);
        switch(op)
        {
            case 'A':
                Cadastro();
                break;
            case 'B':
                ListarCerimonia();
                break;
            case 'C':
                FuturoConj();
                break;
            case 'D':
                DataCasamento();
                break;
        }
    }while(op!='S');
    return 0;
}
