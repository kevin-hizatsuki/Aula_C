#include <stdio.h>
#define DIM 20
#define SEP_NOME ", "
main ()
{
    char Nome[DIM+1],Sobrenome[DIM+1],Completo[2*DIM+1];
    while (1)
    {
        printf("Nome: ");gets(Nome);
        if(strlen(Nome)==0) break;
        printf("Sobrenome: ");gets(Sobrenome);
        strcpy(Completo,Sobrenome);
        strcat(Completo,SEP_NOME);
        strcat(Completo,Nome);
        puts(Completo);
    }
}
