#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float imposto_IRPF(float salario){
    double imposto,faixa1,faixa2,faixa3,faixa4,faixa5;
    imposto=faixa1=faixa2=faixa3=faixa4=faixa5=0;
    double salario_acum=salario;
    if (salario<1903.98){
        imposto=0;
    }
    if (salario>1903.98){
        imposto=imposto+0;
        salario_acum=salario_acum-1903.98;
        faixa1=0;
    }
    if ((salario>=1903.99)&&(salario<=2826.65)){
            if ((salario_acum-922.67)>=0){
            salario_acum=salario_acum-922.67;
            faixa2=922.67*0.075;
        }
        else {
            faixa2=salario_acum*0.075;
        }
    }
    if ((salario>=2826.66)&&(salario<=3751.05)){
        if ((salario_acum-924.40)>=0){
            salario_acum=salario_acum-924.40;
            faixa3=924.40*0.15;
        }
        else {
            faixa3=salario_acum*0.15;
        }
    }
    if ((salario>=3751.06)&&(salario<=4664.68)){
        if ((salario_acum-913.63)>=0){
            salario_acum=salario_acum-913.63;
            faixa4=913.63*0.225;
        }
        else{
            faixa4=salario_acum*0.225;
        }
    }
    if (salario>4664.68){
        faixa5=salario_acum*0.275;
    }
    imposto=faixa1+faixa2+faixa3+faixa4+faixa5;
    return imposto;
}

float novoSalario(float salario){
    if (salario>15000){
        salario=salario*0.1;
    }else if((salario>=7500)&&(salario<=15000)){
        salario=salario*0.2;
    }else if((salario>=1000)&&(salario<=7500)){
        salario=salario*0.3;
    }else if(salario<1000){
        salario=salario*0.4;
    }
    return salario;
}

void classificacao(float salario){
    if (salario<=7000){
        printf("\nMal remunerado\n");
    }else{
        printf("\nBem remunerado\n");
    }

}

int main()
{   float salario,imposto,ad;
    char op;

    printf("Digite o salario do funcionario: \n");
    scanf("%f",&salario);
    printf("=====Menu de opcoes=====\n");
    printf("A-IMPOSTO\nB-NOVO SALARIO\nC-CLASSIFICACAO\n");
    printf("Escolha as opcoes a cima: ");
    op=getche();
    op=toupper(op);
    switch(op){
    case 'A':
        imposto=imposto_IRPF(salario);
        printf("\nO seu imposto sera de %.2f\n",imposto);
        break;
    case 'B':
        ad=novoSalario(salario);
        salario=salario+ad;
        printf("\nO seu novo salario sera de: %.2f\n",salario);
        break;
    case 'C':
        classificacao(salario);
        break;
    }

    return 0;
    }
