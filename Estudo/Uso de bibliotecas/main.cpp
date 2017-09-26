#include <stdio.h>
#include <stdlib.h>
#include "ordenando.h"

using namespace std;

int main()
{
    int a,b;
    printf("Insira: ");
    scanf("%d %d",&a,&b);
    printf("%d",soma(a,b));
    return 0;
}
