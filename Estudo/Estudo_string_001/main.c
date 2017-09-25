#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char nome[100];
    while(1)
    {
        puts("Nome: ");
        gets(nome);
        printf("\nTamanho do nome: %i\n",strlen(nome));
        if (nome[0]=='\0')
            break;
        else
            printf("Nome introduzido: %s\n",nome);
    }
}
