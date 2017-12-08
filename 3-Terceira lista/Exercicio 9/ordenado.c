#include "ordenado.h"
void ordenacao(int num, char nm[][1000])
{
char aux[1000];
int i,j;

for (i = 1; i < num; i++) {
   for (j = 1; j < num; j++) {
      if (strcmp(nm[j - 1], nm[j]) > 0) {
         strcpy(aux, nm[j - 1]);
         strcpy(nm[j - 1], nm[j]);
         strcpy(nm[j], aux);
      }
   }

}
for (i = 0; i < num; i++)
   printf("\n%s", nm[i]);
}

