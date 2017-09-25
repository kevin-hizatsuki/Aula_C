#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isnull(char *s)
{
    return(s[0]=='\0');
}

main()
{
    char nome[100];
    while(1)
    {
        puts("Nome: ");
        gets(nome);
        printf("\nTamanho do nome: %i\n",strlen(nome));
        if (isnull(nome)==0){
            puts("True");
        }else{puts("False");}
        if (nome[0]=='\0')
            break;
        else
            printf("Nome introduzido: %s\n",nome);
    }
}
