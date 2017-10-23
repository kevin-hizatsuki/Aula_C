#include <stdio.h>
#include <stdlib.h>

struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

int main()
{
    struct horario funcao(struct horario x);

    struct horario agora;
    agora.horas=13;
    agora.minutos=17;
    agora.segundos=12;

    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.22/6;
    depois.letra = 'a';

    printf("%i:%i:%i\n",agora.horas,agora.minutos,agora.segundos);
    printf("%i\n",depois.horas);
    printf("%i\n",depois.minutos);
    printf("%f\n",depois.teste);
    printf("%c\n",depois.letra);

    struct horario proximo;
    proximo = funcao(agora);

    printf("%i:%i:%i\n",proximo.horas,proximo.minutos,proximo.segundos);


    return 0;
}
struct horario funcao(struct horario x){
    printf("%i:%i:%i\n",x.horas,x.minutos,x.segundos);
    x.horas=100;
    x.minutos=100;
    x.segundos=100;
    return x;
};
