#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *dia_semana(int n);

int main()
{

    char resultado[20];
   // resultado=malloc(20*sizeof(char));
    strcpy(resultado,dia_semana(3));
    printf("%s",resultado);
    return 0;
}

char *dia_semana(int n) {
    char *d[] = {"erro","domingo","segunda-feira","terça-feira","quarta-feira","quinta-feira","sexta-feira","sábado"};
    return d[1<=n && n<=7? n : 0];}
