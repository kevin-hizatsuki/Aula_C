#include <stdio.h>
#include <stdlib.h>

main()
{
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma= *pX + *pY;
    int *resultado;
    resultado = 6356732; //Esta apontando para o valor do endereço x.

    printf("Endereco de x: %i - Valor de x: %i.\n",pX,*pX);
    printf("Endereco de y: %i - Valor de y: %f.\n",pY,*pY);
    printf("Endereco de z: %i - Valor de z: %c.\n",pZ,*pZ);
    printf("Endereco soma: %i - Soma: %f\n",&soma,soma);
    printf("Valor do resultado: %i\n",*resultado);


}
