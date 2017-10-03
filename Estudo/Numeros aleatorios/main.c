#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Gerando 10 numeros aleatorios: \n\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",rand()%100);
    }

    return 0;
}
