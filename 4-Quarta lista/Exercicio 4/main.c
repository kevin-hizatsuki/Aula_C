#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//#include <locale.h>
// defini��o de estrutura que virou tipo WF
typedef struct wifi
{
    char cor[20];
	float xo;
    float yo;
    float raio;
}WF;
//vari�vel eq do tipo WF
WF eq;
WF tabW[3];

// fun��o para leitura
void ler_equi()
{

	printf("\nDigite cor do equipamento:\n");
	fgets(eq.cor, 20, stdin);
    printf("\nDigite o raio de equipamento:\n");
    scanf("%f",&eq.raio);
    printf("\nDigite a posicao no eixo x:\n");
    scanf("%f",&eq.xo);
    printf("\nDigite a posicao no eixo y:\n");
    scanf("%f",&eq.yo);

}


int ler_varios(float h,float v)
{
    int i;
    float val[3];
	for(i=0;i<3;i++)
	{

		printf("\nDigite cor do equipamento:\n");
		fflush(stdin);
		fgets(tabW[i].cor, 20, stdin);
    	printf("\nDigite o raio de equipamento:\n");
    	fflush(stdin);
    	scanf("%f",&tabW[i].raio);
    	printf("\nDigite a posicao no eixo x:\n");
    	fflush(stdin);
    	scanf("%f",&tabW[i].xo);
    	printf("\nDigite a posicao no eixo y:\n");
    	fflush(stdin);
    	scanf("%f",&tabW[i].yo);
	}

	for(i=0;i<3;i++){
        val[i]=3.14*tabW[i].raio*tabW[i].raio;
	}

	float b[3],c[3],a[3];
	for(i=0;i<3;i++){
        b[i]=tabW[i].xo-h;
        c[i]=tabW[i].yo-v;
        a[i]=sqrt((b[i]*b[i])+(c[i]*c[i]));
        printf("\na=%.2f,b=%.2f,c=%.2f",a[i],b[i],c[i]);
	}
	if ((a[0]<=tabW[0].raio)||(a[1]<=tabW[1].raio)||(a[2]<=tabW[2].raio))return 1;
    else return 0;

}
// fun��o que calcula a �rea de abrang�ncia
float calcular_area_Wifi()
{
   return(3.14*eq.raio*eq.raio);
}
//fun��o para captar sinal
int capta_sinal(float x1, float y1)
{
    float b,c,a;
    b=eq.xo-x1;
    c=eq.yo-y1;
    a=sqrt((b*b)+(c*c));
    printf("\na=%.2f,b=%.2f,c=%.2f",a,b,c);
    if (a<=eq.raio)return 1;
    else return 0;
}
// fun��o principal com menu
int main()
{
    char op;
    float h,v;
  //  setlocale(LC_ALL,"Portuguese");
    do
    {
      printf("\n1-ler atributos\n2-area\n3-capta?\n4-sair\n5-ler tres roteadores\n");
      op=getche();
      switch(op)
      {
          case '1':ler_equi();
                   break;
          case '2':printf("\nArea: %.2f",calcular_area_Wifi());
                   break;
          case '3':printf("\nDigite a posicao do dispositivo(x,y)\n");
                   scanf("%f,%f",&h,&v);
                   if(capta_sinal(h,v)==1) printf("\nDentro da area\n");
                   else                    printf("\nFora da area\n");
                   break;
          case '4':printf("Saindo");
                   break;
          case '5':
                   printf("\nDigite a posicao do dispositivo(x,y)\n");
                   scanf("%f,%f",&h,&v);
                   if(ler_varios(h,v)==1)printf("\nDentro da area\n");
                   else                    printf("\nFora da area\n");
                   break;
          default: printf("\nOp invalida\n");
      }
    }while(op!='4');


    return 0;
}
