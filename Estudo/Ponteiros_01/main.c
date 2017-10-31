#include <stdio.h>
#include <stdlib.h>

main()
{
    struct horas{
        int hora;
        int minuto;
        int segundo;
    };

    struct horas agora,*depois;
    depois=&agora;

    printf("%i:%i:%i\n",agora.hora,agora.minuto,agora.segundo);


}
