#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int contaVogais,i;
    char *vogais;
    char *string;
    char letra;
    string = (char*) malloc(50 * sizeof(char));

    vogais="aeiouAEIOU";
    printf("Digite a palavra: ");
    gets(string);
    printf("\nDigite a letra: ");
    letra=getche();

    contaVogais=0;
    for(i=0;string[i]!='\0';i++)
    {
        char ch;
        int j;
        ch=string[i];
        for(j=0;vogais[j]!='\0';j++)
        {
            if (vogais[j]==ch)
            {
                contaVogais+=1;
                string[i]=letra;
            }
        }
    }

    printf("\nNova palavra: %s\n",string);
    printf("A palavra tem %i vogais\n",contaVogais);

    free(string);

    system("pause");
    return 0;
}
