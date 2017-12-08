#include <stdio.h>
#include <stdlib.h>

float litros;
void andar(float consumo){
    float distancia,litro_p_k;
    if (litros==0){
        printf("\nNao ha combustivel, abasteca antes de andar.\n");
    }else{
    printf("\nDeseja andar quantos quilometros?\n");
    scanf("%f",&distancia);
    litro_p_k=consumo*distancia;
    if  (litros>=litro_p_k){
        litros=litros-litro_p_k;
        printf("\nVoce andou %.2f quilometros.\n",distancia);
        printf("\nConsumiu %f km\n",litro_p_k);
    }else if (litros<litro_p_k){
    printf("\nNao ha combustivel suficiente,abasteca antes de andar.\n");
    printf("\ndistancia %f\n",distancia);
    }
    }
}
float obterGasolina(float litros){
    float comb;
    comb=litros;
    return (comb);
}

float adicionarGasolina(float litros){
    int escolha,combus;
    printf("======Quantos litros deseja adicionar=====\n\n");
    printf("1-5 Litros\n2-10 Litros\n3-20 Litros\n4-30 Litros\n5-40 Litros\n6-50 Litros\n\n");
    printf("Escolha: ");
    scanf("%i",&escolha);
    if (escolha==1){
        combus=5;
    }else if(escolha==2){
        combus=10;
    }else if(escolha==3){
        combus=20;
    }else if(escolha==4){
        combus=30;
    }else if(escolha==5){
        combus=40;
    }else if(escolha==50){
        combus=50;
    }
    return combus;
}

int main()
{
    float nivel_inicial_C;
    float consumo,ad;
    char op;
    litros=0;
    printf("Digite o consumo de combustivel: \n");
    scanf("%f",&consumo);
    while (op!="D"){
    printf("====Menu====\n");
    printf("A-Andar\nB-Obter gasolina\nC-Adicionar Gasolina\nD-Fim\n");
    printf("\nSeu consumo e de %f\n",consumo);
    op=getche();
    op=toupper(op);
    switch(op){
    case 'A':
        andar(consumo);
        break;
    case 'B':
        printf("\nO seu tanque esta com %.2f litros\n",obterGasolina(litros));
        break;
    case 'C':
        ad=adicionarGasolina(litros);
        litros=litros+ad;
        break;
        }
    if (op=='D'){
        break;
    }

    }


    return 0;
}
