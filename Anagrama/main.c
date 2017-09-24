#include<conio.h>
#include<stdio.h>
#include<string.h>

main(){

 int cont=0,i,j,tam1,tam2;   /*Declaração de variáveis inteiras*/
 char palavra1[50],palavra2[50];  /*declaração das strings*/

 printf("Digite a primeira palavra: ");
 gets(palavra1);  /* Lendo a primeira palavra*/
 printf("\nDigite a segunda palavra: ");
 gets(palavra2);  /*Lendo a segunda palavra*/
 tam1=strlen(palavra1);  /*Passando o tamanho da palavra1 para tam1*/
 tam2=strlen(palavra2);  /*Passando o tamanho de palavra2 para tam2*/

 if(tam1==tam2){   /*Verificando se o tamanho das palavras são iguais, senão elas não são anagramas*/
  for(i=0;i<tam1;i++){   /*Verificando os caracteres da primeira string*/
   for(j=0;j<tam2;j++){    /*Verificando os caracteres da segunda string*/
    if(palavra1[i]==palavra2[j]){   /*Comparando se o caracter da palavra1 contém em palavra2*/
     cont++;
     palavra2[j]=0;     /*Se o caracter estiver contido em palavra2, cont soma 1, o caracter é trocado por um 0 e sai do for*/
     break;
    }
   }
  }
  if(cont==tam1){  /*Se o cont for do tamanho da palavra1, quer dizer que sao anagramas*/
   printf("As palavras são anagramas.");
  }
  else{
   printf("Não são anagramas.");
  }
 }
 else{
  printf("Não são anagramas.");
 }
 return 0;
 getch();
}
