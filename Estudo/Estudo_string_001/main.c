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

int strcountd(char *s)//Função que procura variaveis int, ou seja, numeros.
{
    int i,conta;
    for(i=conta=0;s[i]!='\0';i++)
        if(isdigit(s[i])) //Se o caracter for um digito.
        conta++;
    return conta;
}

int indchr(char *s,char ch) //Função que procura a posição de uma determinado caracter dentro de uma string.
{
    int i;
    for (i=0;s[i]!='\0';i++)
        if (s[i]==ch)
        return i;
    return -1;
}

int strpal(char *s)
{
    int i,j;
    for (i=0,j=strlen(s);i<j;i++,j--)
        if (s[i]!=s[j]){
        return 0;}
    return 1;
}

char *strrev(char *s)
{
    int i,len;
    char aux;
    for (i=0,len=strlen(s)-1;i<len;i++,len--)
    {
        aux=s[i];
        s[i] = s[len];
        s[len] = aux;
    }
    return s;
}


main ()
{
    char Nome[DIM+1],Sobrenome[DIM+1],Completo[2*DIM+1],ch,Invertida[DIM+1+DIM+1];
    int rep,contdig,valCh,valPal;
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
        valPal=strpal(Nome);
        puts(Completo);
        printf("O numero que se repete e igual a: %i\n",rep);
        contdig=strcountd(Completo);
        Invertida= *strrev(*Completo);
        printf("O nome invertido e : %s",Invertida);
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
            printf("O caracter %c nao se encontra na string\n",ch);
        }
        if (valPal==1)
        {
            printf("E um palindrome\n");
        }
        else
        {
            printf("Nao e um palindrome %i\n",valPal);
        }
    }
}
