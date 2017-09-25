#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[0][100],b[0][100];

    printf("Digite uma frase: ");
    gets(a);

    strcpy(b,a);
    strrev(b);

    printf("\nA frase invertida : %s\n",b);
    int i;
    for(i = 0; i < strlen(b); i++) {
        if (b[i] == 'a') {
            b[i] = '*';
    printf("\nA frase trocada : %s\n",b);

    return 0;
}
