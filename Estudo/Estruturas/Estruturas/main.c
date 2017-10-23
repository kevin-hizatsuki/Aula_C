#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

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

    return 0;
}
