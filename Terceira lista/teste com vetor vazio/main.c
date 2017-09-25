#include <stdio.h>
#include <stdlib.h>



int i;

int main()
{
    printf("Digite quantos caracteres deve ter uma palavra:");
    scanf("%i",&i);
    char palavra[i];
    printf("Digite a palavra: ");
    scanf("%s",palavra);
    printf("A palavra digitada e: ",palavra);
    return 0;
}
