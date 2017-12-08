#include <stdio.h>
#include <stdlib.h>

char semana[][15]={"0","sabado",
                  "1","domingo",
                  "2","segunda-feira",
                  "3","terca-feira",
                  "4","quarta-feira",
                  "5","quinta-feira",
                  "6","sexta-feira",
                  "",""};
char c[10];

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
/*
int calculo_Base(int dia,int mes,int ano)
{
    int base;
    base=dia+(mes*2);
    base=base+(3*(mes+1)/5);
    base=base+ano+(ano/4)-(ano/100)+(ano/400)+2;
    return base;
}*/

int procSem ()
 {
     int i;
     for(i=0;*semana[i];i=i+2)
     {
        if(strcmp(semana[i],c)==0) break;
     }
    if(*semana[i]) return (i+1);
    else return (-1);
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
    printf("%i\n",base);
    k=base%7;
    printf("%i\n",k);
    sprintf(c,"%d",k);
    linha=procSem();
    if(linha!=-1)
        printf("\nO dia da semana e: %s",semana[linha]);
    return 0;
}
