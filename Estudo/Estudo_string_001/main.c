#include <stdio.h>
#include <ctype.h>  //Para o uso de isdigit na função strcountd
#define DIM 20
#define SEP_NOME ", "


int strcountc(char *s,char ch)
{
    int i,conta;
    for (i=conta=0;s[i]!='\0';i++)
        if (s[i]==ch)
        conta++;
    return conta;
}

int strcountd(char *s)
{
    int i,conta;
    for(i=conta=0;s[i]!='\0';i++)
        if(isdigit(s[i]))
        conta++;
    return conta;
}

int indchr(char *s,char ch)
{
    int i;
    for (i=0;s[i]!='\0';i++)
        if (s[i]==ch)
        return i;
    return -1;
}

main ()
{
    char Nome[DIM+1],Sobrenome[DIM+1],Completo[2*DIM+1],ch;
    int rep,contdig,valCh;
    while (1)
    {
        printf("Nome: ");gets(Nome);
        if(strlen(Nome)==0) break;
        printf("Sobrenome: ");gets(Sobrenome);
        printf("Insira o caracter que deseja pesquisar a posicao: ");scanf("%c",&ch);
        strcpy(Completo,Sobrenome);
        strcat(Completo,SEP_NOME);
        strcat(Completo,Nome);
        rep=strcountc(Completo,'e');
        valCh=indchr(Completo,ch);
        puts(Completo);
        printf("O numero que se repete e igual a: %i\n",rep);
        contdig=strcountd(Completo);
        if (contdig!=0)
        {
            printf("Este string contem %i numeros\n",contdig);
        }
        else
        {
            printf("Nao ha digitos numerico nessa string\n");
        }
        if(valCh!=-1)
        {
            printf("O caracter %c esta na posicao %i\n",ch,valCh);
        }
        else
        {
            printf("O caracter %c nao se encontra no string\n",ch);
        }
    }
}
