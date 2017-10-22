#include <stdio.h>
#include <stdlib.h>

main()
{
    int x;
    x=10;
    int *ponteiro;
    ponteiro = &x;
    printf("%i\n",*ponteiro); //Com o asterisco acessa-se o valor do x.
    printf("%i\n",ponteiro);  //Sem o asterisco acessa-se o valor do endereço de momoria do x.


}
