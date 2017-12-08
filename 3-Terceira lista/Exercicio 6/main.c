#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char aluno1[][1]={"0","A",
                  "1","C",
                  "2","B",
                  "3","F",
                  "4","D",
                  "5","A",
                  "6","E",
                  "7","C",
                  "8","A",
                  "9","E"
                  };
char aluno2[][1]={"0","B",
                  "1","D",
                  "2","B",
                  "3","F",
                  "4","D",
                  "5","A",
                  "6","E",
                  "7","C",
                  "8","A",
                  "9","E"
                  };

char aluno3[][1]={"0","B",
                  "1","D",
                  "2","B",
                  "3","F",
                  "4","D",
                  "5","E",
                  "6","E",
                  "7","D",
                  "8","A",
                  "9","B"
                  };

char gabarito[][1]={"0","A","1","C","2","B","3","E","4","D","5","A","6","E","7","C","8","A","9","E"};
int pontuacao[2][1];
char *p;

int correcao(char aluno[][1],char gabarito[][1])
{
    int ponto,i,j;
    ponto=0;
    for(i=0;i<=19;i++){
    if (i%2!=0){
        if (aluno[i][0]==gabarito[i][0])
        ponto=ponto+1;
        //printf("ALUNO Letra: %c\n",aluno[i][0]);
        //printf("ALUNO Ponto : %i\n",ponto);
        }
        }
    return ponto;
}

void printResposta(char aluno[][1])
{
    int i;
    for(i=0;i<=19;i++){
    if (i%2!=0){
        printf("Resposta : %c\n",aluno[i][0]);
        }
    }
}


int main()
{
    int ponto,i,notaA1,notaA2,notaA3;
    float media=0;
    int matriula[3]={0};

    for (i=0;i<3;i++){
        printf("\nInsira a matricula do %i aluno: ",i+1);
        scanf("%i",&matriula[i]);
    }

    notaA1=correcao(aluno1,gabarito);
    notaA2=correcao(aluno2,gabarito);
    notaA3=correcao(aluno3,gabarito);
    media=(notaA1+notaA2+notaA3)/3;

    printf("Aluno 1\nMatricula: %i\n",matriula[0]);
    printResposta(aluno1);
    printf("Media da sala: %2.f\n",media);
    printf("A nota do aluno1: %i\n",notaA1);
    if (notaA1>=media){
        printf("Parabens, a cima da nota!\n");
    }else{printf("Reprovado!\n");}
    printf("Aluno 2 \nMatricula: %i\n",matriula[1]);
    printResposta(aluno2);
     printf("Media da sala: %2.f\n",media);
    printf("A nota do aluno2: %i\n",notaA2);
    if (notaA2>=media){
        printf("Parabens, a cima da nota!\n");
    }else{printf("Reprovado!\n");}
    printf("Aluno 3 \nMatricula: %i\n",matriula[2]);
    printResposta(aluno3);
     printf("Media da sala: %2.f\n",media);
    printf("A nota do aluno3: %i\n",notaA3);
    if (notaA3>=media){
        printf("Parabens, a cima da nota!\n");
    }else{printf("Reprovado!\n");}
    return 0;
}
