#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;
    agora.horas=13;
    agora.minutos=17;
    agora.segundos=12;

    printf("%i:%i:%i\n",agora.horas,agora.minutos,agora.segundos);

    return 0;
}
