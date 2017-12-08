#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct dados{
    float raio;
};

struct dados circunferencia;


void ComprimentoC(){
    float pi;
    pi=3.14;
    printf("\nO comprimento da circunferencia e igual a: %.2f",2*pi*circunferencia.raio);
}

void AreaC(){
    float pi;
    pi=3.14;
    printf("\nA area da circunferencia e igual a: %.2f",pi*(pow(circunferencia.raio,2)));
}

int main()
{
    char op;
    printf("Insira o raio da circunferencia: ");
    scanf("%f",&circunferencia.raio);
    printf("\nEscolha as opcoes:\nA-Comprimento\nB-Area\n");
    op=getche();
    op=toupper(op);
    switch(op){
    case 'A':
        ComprimentoC();
        break;
    case 'B':
        AreaC();
        break;
    }

    return 0;
}
