#include <stdio.h>
#include <conio.h>

typedef struct rotlista {
        char item;
        struct rotlista *prox;
        }*lista;

void inserir(lista *p, char x)
{
  lista n=malloc(sizeof(struct rotlista));
  if(n!=NULL)
  {
  n->item=x;
  n->prox=*p;
  *p=n;

  }
}

 void remover(lista *p)
{
 lista n=*p;
 if(n==NULL)return;
 *p=n->prox;
  free(n);

}

void imprime(lista p)
{
     while(p!=NULL)
     {
     printf("\tdado: %c\tendere�o: %x\n", p->item, p->prox);
     p=p->prox;
     }
}

lista acessa(lista p, int i)
{
      while( i>0 && p!=NULL)
      {
              p=p->prox;
              i--;
      }
    return p;
}

main()
{
 lista lex=NULL;
 lista aux=NULL;
 char letra;
 int op,pos;
 do {


         printf("\n1-inserir\t2-remover\t3-listar\n4-sair\t5-inserir depois da posicao i\t6-limpar tela\n");
         scanf("%d",&op);
         switch(op)
         {
              case 1: printf("\nDigite letra\n");
                      letra=getche();
                      inserir(&lex,letra);
                     break;
              case 2:remover(&lex);
                     break;
              case 3: imprime(lex);
                     break;
              case 4: printf("\nSaindo...");
                    break;
              case 5:printf("\nInsira posi desejada\n");
                     scanf("%d",&pos);
                     aux=acessa(lex,pos);
                     printf("\nDigite letra\n");
                     letra=getche();
                     inserir(&aux->prox,letra);
                     break;
              case 6:system("cls");
                    break;
              default: printf("\nerro\n");
         }
     } while (op!=4);
 getch();
}

