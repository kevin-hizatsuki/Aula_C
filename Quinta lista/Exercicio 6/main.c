#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dado{
    char frase[100];
    struct dado *proximo;
}*FRASE;

typedef struct dado2{
    char frase[100];
    struct dado2 *proximo;
}*FRASE2;

char frase[5][100];

void inserirDados(FRASE *local)
{
    FRASE novo;
    novo= (FRASE)malloc(sizeof(struct dado));
    if(novo!=NULL)
    {
        printf("\nDigite a frase: ");
        fflush(stdin);
        gets(novo->frase);
        novo->proximo=*local;
        *local=novo;.]
    }
}

void listarFrase(FRASE local)
{
    int cont=0;
    int i;
    while(local!=NULL)
    {
        printf("\n%s",local->frase);
        strcpy(frase[cont],local->frase);
        local=local->proximo;
        cont++;
    }
    cont--;
    printf("\nContador: %i",cont);
    for(i=cont;i>=0;i--){
        printf("\n%s",frase[i]);
    }
}


void listarAoContrario(FRASE local2)
{
    printf("\n=====Lista invertida======\n\n");
    while(local2!=NULL)
    {
        printf("\n%s",local2->frase);
        local2=local2->proximo;
    }
}

FRASE acessa(FRASE local,int quant)
{
    while(local!=NULL && quant>0)
    {
        local=local->proximo;
        quant--;
    }
    return local;
}

void contaEspaco(char frase[100])
{
    int i;
    int cont=0;
    for(i=0;i<strlen(frase);i++)
    {
        if (frase[i]==' '){
            cont++;
        }
    }
    printf("\nNesta frase ha %i espacos",cont);
}

int main()
{
    FRASE acervo = NULL;
    FRASE2 acervo2 = NULL;
    FRASE aux = NULL;
    char op;
    int posicao;
    do{
        printf("\n=========Menu============\n");
        printf("\nA-Incluir uma nova frase\nB-Listar a frase\nC-Conta quantos espacos ha na sequencia de carateres digitada \nS-Sair\n\nOpcao: ");
        op=getche();
        op=toupper(op);
        switch(op){
            case 'A':
                inserirDados(&acervo);
                break;
            case 'B':
                listarFrase(acervo);
                break;
            case 'C':
                printf("\nDigite a posicao da frase:");
                fflush(stdin);
                scanf("%i",&posicao);
                aux = acessa(acervo,posicao);
                printf("%s",aux);
                contaEspaco(aux);
                break;
        }

    }while(op!='S');
    return 0;
}
