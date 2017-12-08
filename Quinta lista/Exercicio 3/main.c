#include <stdio.h>
#include <stdlib.h>

char resultado[20];
char *dia_semana(int n);


int calculoAlg(int dia,int mes,int ano)
{
    int A,B,C,D,E,F,G,H,I;
    A=((12-mes)/10);
    B=ano-A;
    C=mes+(12*A);
    D=B/100;
    E=D/4;
    F=2-D+E;
    G=(365.25*B);
    H=(30.6001*(C+1));
    I=F+G+H+dia+5;
    return I;

}

int main()
{
    int dia,mes,ano,base,k,linha;

    printf("Insira o dia: ");
    scanf("%i",&dia);
    printf("\nInsira o mes: ");
    scanf("%i",&mes);
    printf("\nInsira o ano: ");
    scanf("%i",&ano);
    if (mes==1 && mes==2){
        mes=13;
        ano=ano-1;
    }
    base=calculoAlg(dia,mes,ano);
    k=base%7;
    strcpy(resultado,dia_semana(k));
    printf("\nO dia da semana e: %s",resultado);

    return 0;
}
char *dia_semana(int n) {
    char *d[] = {"erro","domingo","segunda-feira","terca-feira","quarta-feira","quinta-feira","sexta-feira","sabado"};
    return d[1<=n && n<=7? n : 0];}
