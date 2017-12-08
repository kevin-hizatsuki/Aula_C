#include <stdio.h>
#include <stdlib.h>


int main()
{
    struct horario{
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    struct horario horas;

    int hora=100;
    int minuto=200;
    int segundo=300;

    horas.pHora=&hora;
    horas.pMinuto=&minuto;
    horas.pSegundo=&segundo;

    printf("Hora - %i\n",*horas.pHora);
    printf("Minuto - %i\n",*horas.pMinuto);
    printf("Segundo - %i\n",*horas.pSegundo);

    return 0;
}
