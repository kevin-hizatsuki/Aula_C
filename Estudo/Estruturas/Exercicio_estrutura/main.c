#include <stdio.h>
#include <stdlib.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main()
{
    void recebeHorario(struct horario lista[5]);
    void printarHorario(struct horario lista[5]);
    struct horario valores[5];

    recebeHorario(valores);
    printarHorario(valores);

    return 0;
}

void recebeHorario(struct horario lista[5]){
    int i;
    for (i=0;i<5;i++){
        printf("Digite o %i horario: ",i+1);
        scanf("%i:%i:%i",&lista[i].horas,
                         &lista[i].minutos,
                         &lista[i].segundos);
    }

}
void printarHorario(struct horario lista[5]){
    int i;
    for (i=0;i<5;i++){
        printf("\nO %i horario: %i:%i:%i\n",i+1,
                                        lista[i].horas,
                                        lista[i].minutos,
                                        lista[i].segundos);
    }
}
