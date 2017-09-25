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

main ()
{
    char Nome[DIM+1],Sobrenome[DIM+1],Completo[2*DIM+1];
    int rep,contdig;
    while (1)
    {
        printf("Nome: ");gets(Nome);
        if(strlen(Nome)==0) break;
        printf("Sobrenome: ");gets(Sobrenome);
        strcpy(Completo,Sobrenome);
        strcat(Completo,SEP_NOME);
        strcat(Completo,Nome);
        rep=strcountc(Completo,'e');
        puts(Completo);
        printf("O numero que se repete e igual a: %i\n",rep);
        contdig=strcountd(Completo);
        if (contdig!=0)
            printf("Este string contem %i numeros\n",contdig);
        else
            printf("Nao ha digitos numerico nessa string\n");
    }
}
