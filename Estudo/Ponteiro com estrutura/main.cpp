#include <stdio.h>
#include <stdlib.h>

struct horario{
    int hora;
    int minuto;
    int segundo;
};

int main()
{
    struct horario agora,*depois;
    depois = &agora;
    (*depois).hora=20;
    (*depois).minuto=50;
    (*depois).segundo=60;

    int somatorio=100;
    struct horario antes;

    antes.hora=somatorio + (*depois).segundo;
    antes.minuto=agora.hora+depois->minuto;



    printf("%i:%i:%i\n",antes.hora,antes.minuto,antes.segundo);


    printf("%i:%i:%i",agora.hora,agora.minuto,agora.segundo);

    return 0;
}
