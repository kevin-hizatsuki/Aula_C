#include <stdio.h>
#include <stdlib.h>


float escolhaTipoCombustivel(char tipoCombustivel){
    float valorLitro;
    if (tipoCombustivel=='A'){
        valorLitro=3.77;
        }else if (tipoCombustivel=='B'){
        valorLitro=2.68;
        }else if(tipoCombustivel=='C'){
        valorLitro=2.74;
        }else if(tipoCombustivel=='D'){
        valorLitro=1.93;
        }else if(tipoCombustivel=='E'){
        valorLitro=1.99;
        }
    return valorLitro;
}

void abastecerPorValor(float valor,float valorLitro){
    float totalLitro;
    totalLitro=valor/valorLitro;
    printf("\nVoce abasteceu %.2f litros\n",totalLitro);
}

void abastecerPorLitro(float litros,float valorLitro) {
    float valorPagar;
    valorPagar=litros*valorLitro;
    printf("\nTotal a pagar: %.2f\n",valorPagar);
}

void alterarValor(float novVal,char opT){
    float valorLitro1,valorLitro2,valorLitro3,valorLitro4,valorLitro5;
    if (opT=='A'){
        valorLitro1=novVal;
        printf("A-Gasolina= %.2f\nB-Etanol= %f\nC-Diesel= %f\nD-Gas veicular= %f\nE-Alcool= %f\n",valorLitro1,valorLitro2=2.68,valorLitro3=2.74,valorLitro4=1.93,valorLitro5=1.99);
    }else if(opT=='B'){
        valorLitro2=novVal;
        printf("A-Gasolina= %f\nB-Etanol= %.2f\nC-Diesel= %f\nD-Gas veicular= %f\nE-Alcool= %f\n",valorLitro1=3.77,valorLitro2,valorLitro3=2.74,valorLitro4=1.93,valorLitro5=1.99);
    }else if (opT=='C'){
        valorLitro3=novVal;
        printf("A-Gasolina= %f\nB-Etanol= %f\nC-Diesel= %.2f\nD-Gas veicular= %f\nE-Alcool= %f\n",valorLitro1=3.77,valorLitro2=2.68,valorLitro3,valorLitro4=1.93,valorLitro5=1.99);
    }else if (opT=='D'){
        valorLitro4=novVal;
        printf("A-Gasolina= %f\nB-Etanol= %f\nC-Diesel= %f\nD-Gas veicular= %.2f\nE-Alcool= %f\n",valorLitro1=3.77,valorLitro2=2.68,valorLitro3=2.74,valorLitro4,valorLitro5=1.99);
    }else if (opT=='E'){
        valorLitro5=novVal;
        printf("A-Gasolina= %f\nB-Etanol= %f\nC-Diesel= %f\nD-Gas veicular= %f\nE-Alcool= %.2f\n",valorLitro1=3.77,valorLitro2=2.68,valorLitro3=2.74,valorLitro4=1.93,valorLitro5);
    }
}

int main(){
    int cont=0;
    char tipoCombustivel,op,opT;
    float valorLitro,quantidadeCombustivel,valor,litros,precoL,novVal;
    float valorLitro1,valorLitro2,valorLitro3,valorLitro4,valorLitro5;
    while(op!='F'){
        printf("A-Gasolina\nB-Etanol\nC-Diesel\nD-Gas veicular\nE-Alcool\n");
        printf("\nOla, voce deseja qual combustivel: ");
        tipoCombustivel=getche();
        tipoCombustivel=toupper(tipoCombustivel);
        valorLitro=escolhaTipoCombustivel(tipoCombustivel);
        printf("\n=======Menu=======\n");
        printf("A-Abastecer por valor\n");
        printf("B-Abastecer por litro\n");
        printf("C-Alterar o valor\n");
        printf("D-alterar o combustivel\n");
        printf("E-Alterar a quantidade de combustivel\n");
        printf("F-Sair\n");
        printf("\nAgora digite uma das opcoes a cima: ");
        op=getche();
        op=toupper(op);
        switch(op){
            case 'A':
                printf("\nDeseja abastecer quantos(Reais) : ");
                scanf("%f",&valor);
                abastecerPorValor(valor,valorLitro);
                break;
            case 'B':
                printf("\nDeseja abastecer quantos litros: ");
                scanf("%f",&litros);
                abastecerPorLitro(litros,valorLitro);
                break;
            case 'C':
                printf("A-Gasolina= %f\nB-Etanol= %f\nC-Diesel= %f\nD-Gas veicular= %f\nE-Alcool= %f\n",valorLitro1=3.77,valorLitro2=2.68,valorLitro3=2.74,valorLitro4=1.93,valorLitro5=1.99);
                printf("=nDeseja alterar qual valor: ");
                opT=getche();
                opT=toupper(opT);
                printf("\nInsira o novo preco: ");
                scanf("%f",&novVal);
                alterarValor(novVal,opT);
                break;
            case 'D':
                printf("A-Gasolina\nB-Etanol\nC-Diesel\nD-Gas veicular\nE-Alcool\n");
                printf("\nOla, voce deseja qual combustivel: ");
                tipoCombustivel=getche();
                tipoCombustivel=toupper(tipoCombustivel);
                valorLitro=escolhaTipoCombustivel(tipoCombustivel);
                break;
            case 'E':
                break;

        }
        if (op=='F'){
            break;
        }
    }
return 0;
}
