#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    printf("Gerando 10 numeros aleatorios: \n\n");

    srand(time(NULL));

    for(i=0;i<10;i++)
    {
        printf("%d ",rand()%100);
    }

    return 0;
}
