#include <stdio.h>
#include <stdlib.h>

/*struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };*/

int main()
{
    //struct horario funcao(struct horario x);
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    }exemplo={10,20,51};
    struct horario agora;
    agora.horas=13;
    agora.minutos=17;
    agora.segundos=12;

    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.22/6;
    depois.letra = 'a';

    struct horario vetor[5]={{15,65,4},{1,5,4},{5,5,47},{125,625,41},{145,675,48}};
    int i;
    for(i=0;i<5;i++){
        printf("Vetor %i: %i:%i:%i\n",i+1,vetor[i].horas,vetor[i].minutos,vetor[i].segundos);

    }

    /*vetor[0].horas=15;
    vetor[0].minutos=5;
    vetor[0].segundos=1;
    printf("Vetor: %i:%i:%i\n",vetor[0].horas,vetor[0].minutos,vetor[0].segundos);*/

    printf("%i:%i:%i\n",agora.horas,agora.minutos,agora.segundos);
    printf("%i\n",depois.horas);
    printf("%i\n",depois.minutos);
    printf("%f\n",depois.teste);
    printf("%c\n",depois.letra);
    printf("Exemplo : %i:%i:%i\n",exemplo.horas,exemplo.minutos,exemplo.segundos);


    /*struct horario proximo;
    proximo = funcao(agora);

    printf("%i:%i:%i\n",proximo.horas,proximo.minutos,proximo.segundos);
    */

    return 0;
}
/*struct horario funcao(struct horario x){
    printf("%i:%i:%i\n",x.horas,x.minutos,x.segundos);
    x.horas=100;
    x.minutos=100;
    x.segundos=100;
    return x;
};*/
