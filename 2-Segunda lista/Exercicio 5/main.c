#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void envelhecer(int anos,int idade){
    idade=idade+anos;
}

void crescer(float altura,int anos){
    altura=altura+(anos*0.05);
}

void engordar(float kg,float peso){
    peso=peso+kg;
}

void emagrecer(float kg,float peso){
    peso=peso-kg;
}

float IMC(float peso,float altura){
    float imc;
    imc=peso/(pow(altura,2));
    if (imc<18.5)
    {
        return printf("\nEsta abaixo do peso.\n");
    }
    else if (imc>18.6 && imc<24.9)
    {
        return printf("\nEsta no peso ideal.\n");
    }
    else if (imc>25.0 && imc<29.9)
    {
        return printf("\nLevemente acima do peso.\n");
    }
    else if (imc>30.0 && imc<34.9)
    {
        return printf("\nObesidade grau I.\n");
    }
    else if (imc>35.0 && imc<39.9)
    {
        return printf("\nObesidade grauII(severa)\n");
    }
    else if (imc>40.0)
    {
        return printf("\nObesidade grau III(morbida)\n");
    }
}

int main()
{
    char nome[20],op;
    int idade,anos;
    float peso,altura,kg;
    printf("Digite o seu nome: ");
    scanf("%s",&nome);
    printf("\nQuantos anos voce tem: ");
    scanf("%i",&idade);
    printf("\nQual o seu peso(KG): ");
    scanf("%f",&peso);
    printf("\nQual a sua altura(M): ");
    scanf("%f",&altura);
    while (op!='E'){
        printf("\n=====Dados=====\n\nNome %s\nIdade: %i\nPeso: %.2f\nAltura: %.2f\n\n",nome,idade,peso,altura);
        printf("\n=====Menu=====\n");
        printf("\nA-Envelhecer\nB-Engordar\nC-emagrescer\nD-Gerar IMC\nE-Fim\n");
        op=getche();
        op=toupper(op);
        switch(op){
        case 'A':
            printf("Quantos anos deseja envelhecer: ");
            scanf("%i",&anos);
            envelhecer(anos,idade);
            if (idade<=21){
                envelhecer(altura,anos);
                break;
            }else{
                break;
            }
        case 'B':
            printf("Quantos quilos engordou: ");
            scanf("%f",&kg);
            engordar(kg,peso);
            break;
        case 'C':
            printf("Quantos quilos emagreceu: ");
            scanf("%f",&kg);
            emagrecer(kg,peso);
            break;
        case 'D':
            IMC(peso,altura);
            break;
        }
        if (op=='E'){
            break;
        }
    }


    return 0;
}
