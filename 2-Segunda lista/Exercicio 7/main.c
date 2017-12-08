#include <stdio.h>
#include <stdlib.h>

void lerString(char S1[]){
    printf("\nA sua string: %s\n",S1);
}

int contarString(char string[]){
    int contador=0,i=0;
    for (i=0;i<20;i++){
        if (string[i]=='\0'){
            break;
        }else{
        contador=contador+1;
        }
    }
    return contador;
}

void compararString(char string1[],char string2[]){
    if (string1==string2){
        printf("\nOs dois strings sao iguais\n");
    }else{
        printf("\nAmbos sao diferentes\n");
    }
}

void concaternacao(char S1[],char S2[]){
    strcat(S1,"");
    strcat(S1,S2);
    printf("\n%s",S1);
}
void reverso(char S1[]){
    int cont=0,i;
    char newstr[cont];
    for(i=0;i<20;i++)
    if(S1[i]=='\0'){
        break;
    }else{
        cont=cont+1;
    }
    for (i=cont;i>=0;i--)
        newstr[cont-1-i]=S1[i];
    printf("\nString reverso: %s\n",newstr);
}

void contador(char S1[]){
    char letra;
    int i,cont=0;
    printf("\nInforme qual caracter quer contar: ");
    letra=getche();
    for (i=0;i<20;i++)
    if(S1[i]==letra){
        cont=cont+1;
    }
    printf("\nO caracter %c se repete %i vezes\n",letra,cont);
}

void substituirOcorrencia(char string1[],char string2[]){
    char string3[40],stringBase[1];
    int i,j;
    for (i=0;i<20;i++)
    if (string1[i]=='\0'){
        break;
    }else{
        stringBase[0]=string2[0];
        for (j=0;j<20;j++)
        if (string1[0]==string1[j]){
                string3[j]=stringBase[0];
        }else{
        string3[j]=string1[j];
        }
    }
    printf("Novo caracter e : %s",string3);
}

int main()
{
    char S1[20],S2[20],op;
    int quant;
    printf("\nDigite a sua string: \n");
    scanf("%s",S1);
    printf("\nDigite a sua segunda string: \n");
    scanf("%s",S2);
    while (op!='H'){
        printf("\n======Menu======\n");
        printf("A-Ler uma string S1\n");
        printf("B-Imprimir o tamanho da string S1\n");
        printf("C-Comparar a string S1 com uma nova string S2\n");
        printf("D-Concatenar a string S1 com uma nova string S2\n");
        printf("E-Imprimir a string S1 de forma reversa\n");
        printf("F-Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("G-Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2\n");
        printf("H-Sair\n\n\n");
        printf("\nDigite uma das opcoes mostradas a cima: ");
        op=getche();
        op=toupper(op);
        switch(op){
        case 'A':
            lerString(S1);
            break;
        case 'B':
            quant=contarString(S1);
            printf("\nA string tem tamanho de : %i\n",quant);
            break;
        case 'C':
            compararString(S1,S2);
            break;
        case 'D':
            concaternacao(S1,S2);
            break;
        case 'E':
            reverso(S1);
            break;
        case 'F':
            contador(S1);
            break;
        case 'G':
            substituirOcorrencia(S1,S2);
            break;
        }
        if (op=='H'){
            break;
        }
    }

    return 0;
}
