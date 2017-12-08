#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dado{
    char frase[100];
}FRASE;


char frase[100][100];

FRASE palavras;
FILE *p_frase;

void abre_arquivo()
{
    p_frase = fopen("freases_dado.dat","a+b");
}

void mostrar()
{
    printf("\nFrase: %s",palavras.frase);
}

void inserirDados()
{
    system("cls");
    printf("\n Insira a frase:");
    gets(palavras.frase);
    fseek(p_frase,0, SEEK_END);
    fwrite (&palavras, sizeof(FRASE),1,p_frase);
}

void listarFrase()
{
    rewind(p_frase);
    int cont=0;
    int i;
       do{

       fread(&palavras,sizeof(FRASE),1,p_frase);
       strcpy(frase[cont],palavras.frase);
       cont++;
       if(feof(p_frase)==0) mostrar();
       }while(feof(p_frase)==0);
       getch();
       printf("\n\n======Ordem inversa======\n");
        for(i=cont;i>=0;i--){
            printf("\n%s",frase[i]);
    }

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
    abre_arquivo();
    char op;
    int posicao;
    char acessar[100];
    do{
        printf("\n=========Menu============\n");
        printf("\nA-Incluir uma nova frase\nB-Listar a frase\nC-Conta quantos espacos ha na sequencia de carateres digitada \nS-Sair\n\nOpcao: ");
        op=getche();
        op=toupper(op);
        switch(op){
            case 'A':
                inserirDados();
                break;
            case 'B':
                listarFrase();
                break;
            case 'C':
                printf("\nDigite a posicao da frase:");
                fflush(stdin);
                scanf("%i",&posicao);
                strcpy(acessar,frase[posicao]);
                printf("\nfrase: %s",acessar);
                contaEspaco(acessar);
                break;
        }

    }while(op!='S');
    fclose(p_frase);
    return 0;
}
