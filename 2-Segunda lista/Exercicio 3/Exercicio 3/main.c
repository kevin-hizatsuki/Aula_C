#include <stdio.h>
#include <stdlib.h>

int maior_numero(int n1,int n2,int n3,int n4,int n5){
    int maior;
    if (n1>n2&&n1>n3&&n1>n4&&n1>n5){
        maior=n1;
    }
    else if (n2>n1&&n2>n3&&n2>n4&&n2>n5){
        maior=n2;
    }
    else if (n3>n2&&n3>n1&&n3>n4&&n3>n5){
        maior=n3;
    }
    else if (n4>n2&&n4>n3&&n4>n1&&n4>n5){
        maior=n4;
    }
    else if (n5>n2&&n5>n3&&n5>n4&&n5>n1){
        maior=n5;
    }
    return maior;
}

int menor_numero(int n1,int n2,int n3,int n4,int n5){
    int menor;
    if (n1<n2&&n1<n3&&n1<n4&&n1<n5){
        menor=n1;
    }
    else if (n2<n1&&n2<n3&&n2<n4&&n2<n5){
        menor=n2;
    }
    else if (n3<n2&&n3<n1&&n3<n4&&n3<n5){
        menor=n3;
    }
    else if (n4<n2&&n4<n3&&n4<n1&&n4<n5){
        menor=n4;
    }
    else if (n5<n2&&n5<n3&&n5<n4&&n5<n1){
        menor=n5;
    }
    return menor;
}

float media_aritmetica(int n1,int n2,int n3,int n4,int n5){
    float soma;
    soma=n1+n2+n3+n4+n5;
    return  (soma/5);
}
float calculo_mediana(int n1,int n2,int n3,int n4,int n5){
    float vetor[4],aux,mediana;
    int i,j;
    vetor[0]=n1;
    vetor[1]=n2;
    vetor[2]=n3;
    vetor[3]=n4;
    vetor[4]=n5;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    mediana = vetor[5/2];
    return mediana;
}

int calc_moda(int n1,int n2,int n3,int n4,int n5){
    int contador=1,comparador,vln1,vln2,vln3,vln4,vln5,maior;
    comparador=vln1=vln2=vln3=vln4=vln5=maior=0;
    for (contador=1;contador<6;contador=contador+1){
        if (contador==1){
            comparador=n1;
            if (comparador==n2){
                vln1=vln1+1;
            }
            if(comparador==n3){
                vln1=vln1+1;
            }
            if(comparador==n4){
                vln1=vln1+1;
            }
            if(comparador==n5){
                vln1=vln1+1;
            }
        }
        if (contador==2){
            comparador=n2;
            if(comparador==n3){
                vln2=vln2+1;
            }
            if(comparador==n4){
                vln2=vln2+1;
            }
            if(comparador==n5){
                vln2=vln2+1;
            }
        }
        if (contador==3){
            comparador=n3;
            if(comparador==n4){
                vln3=vln3+1;
            }
            if(comparador==n5){
                vln3=vln3+1;
            }
        }
        if (contador==4){
            comparador=n4;
            if(comparador==n5){
                vln4=vln4+1;
            }
        }
    }
    if ((vln1>vln2)&&(vln1>vln3)&&(vln1>vln4)&&(vln1>vln5)){
        maior=n1;
    }
    if ((vln2>vln1)&&(vln2>vln3)&&(vln2>vln4)&&(vln2>vln5)){
        maior=n2;
    }
    if ((vln3>vln2)&&(vln3>vln1)&&(vln3>vln4)&&(vln3>vln5)){
        maior=n3;
    }
    if ((vln4>vln2)&&(vln4>vln3)&&(vln4>vln1)&&(vln4>vln5)){
        maior=n4;
    }
    if ((vln5>vln2)&&(vln5>vln3)&&(vln5>vln4)&&(vln5>vln1)){
        maior=n5;
    }
    return maior;
}

int main()
{
    int n1,n2,n3,n4,n5,maior,menor,moda=0;
    float med_a,mediana;
    char op;
    printf("Insira o primeiro numero: \n");
    scanf("%i",&n1);
    printf("Insira o segundo numero: \n");
    scanf("%i",&n2);
    printf("Insira o terceiro numero: \n");
    scanf("%i",&n3);
    printf("Insira o quarto numero: \n");
    scanf("%i",&n4);
    printf("Insira o quinto numero: \n");
    scanf("%i",&n5);
    printf("=====Escolha as opcoes=====\n\n");
    printf("A-O maior numero dentre eles. \nB-O menor numero dentre eles.\nC-A media aritmética entre eles.\nD-a mediana entre eles.\nC-A moda entre eles.");
    op=getche(op);
    op=toupper(op);
    switch(op){
    case 'A':
        maior=maior_numero(n1,n2,n3,n4,n5);
        printf("\no maior numero e %i\n",maior);
        break;
    case 'B':
        menor=menor_numero(n1,n2,n3,n4,n5);
        printf("\no menor numero e %i\n",menor);
        break;
    case 'C':
        med_a=media_aritmetica(n1,n2,n3,n4,n5);
        printf("\na media aritmetica e %.2f\n",med_a);
        break;
    case 'D':
        mediana=calculo_mediana(n1,n2,n3,n4,n5);
        printf("\nO valor da mediana e: %2.2f\n", mediana);
        break;
    case 'E':
        moda=calc_moda(n1,n2,n3,n4,n5);
        printf("\na moda e igual a %i\n",moda);
        break;
    return 0;
    }
}
