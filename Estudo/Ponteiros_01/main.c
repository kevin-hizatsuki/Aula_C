#include <stdio.h>
#include <stdlib.h>

struct lista{
    int valor;
    struct lista *proximo;
};

struct lista *procurarVALOR(struct lista *pValor,int valor){
    while(pValor!=(struct lista *)0){
            if((*pValor).valor==valor){
                    return pValor;
                }
            else{
                pValor=(*pValor).proximo;

            }
        }
    return (struct lista *)0;
    };

int main()
{
    struct lista *procurarVALOR(struct lista *pValor,int valor);
    struct lista m1,m2,m3;
    struct lista *resultado,*gancho=&m1;

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *)0;
    int valor;
    printf("\nDigite um valor: ");
    scanf("%i",&valor);

    resultado=procurarVALOR(gancho,valor);

    if (resultado==(struct lista *)0){
        printf("\nValor nao encontrado");
    }
    else{
        printf("Valor %i encontrado",(*resultado).valor);
    }


    return 0;
}
