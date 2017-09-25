#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char dic [][11]={"cat","gato","katze","chat",
                "dog","cachorro","hund","chien",
                "is","e","ist", "est",
                "bad","ruim","schlecht","mauvais",
                "region","regiao","region", "region",
                "shepherds","pastor","hirte", "bergers",
                "field","campo","feld", "champ",
                "flock","rebanho","herde", "troupeau",
                "night","noite","nacht", "nuit",
                "angel","anjo","engel", "ange",
                "Lord","Senhor","Herr", "Seigneur",
                "glory","gloria","herrlichkeit", "gloire",
                "great","otimo","groß","génial",
                "fear","medo","angst", "peur",
                "God","Deus","Gott", "Dieu",
                "good","bom","gut", "bon",
                "day","dia","tag", "jour",
                "city","cidade","stadt", "ville",
                "baby","bebe","baby", "bebe",
                "earth","terra","erde", "terre",
                "peace","paz","frieden", "paix",
                "highest","mais alto","höchste", "plus haut",
                "to","para","to", "a",
                "in","dentro","in","dans",
                "near","perto", "in der Nähe","près",
                "late","tarde","spät","tard",
                "happy","feliz","glücklich","heureux",
                "sad","triste","traurig","triste",
                "full","cheio","voll","plein",
                "dress","vestido","kleid","robe",
                "idea","ideia","idee","idée",
                "war","guerra","krieg","guerre",
                "know","saber","wissen","savoir",
                "past","passado","vergangenheit","passé",
                "job","trabalho","job","travail",
                "","",};
char frase [50];
char palavra [11];
char *p;

void pega_palavra()
 {
  char *q;
  q=palavra;
  while (*p && *p!=' ')
  {
      *q=*p;
      p++;
      q++;
  }
  if (*p==' ')p++;
  *q='\0';
 }

 int traducao ()
 {
     int i;
     for(i=0;*dic[i];i=i+4)
     {
        if(strcmp(dic[i],palavra)==0) break;
     }
    if(*dic[i]) return (i+1);
    else return (-1);
 }
 int traducaoAl ()
 {
     int i;
     for(i=0;*dic[i];i=i+4)
     {
        if(strcmp(dic[i],palavra)==0) break;
     }
    if(*dic[i]) return (i+2);
    else return (-1);
 }
 int traducaoFr ()
 {
     int i;
     for(i=0;*dic[i];i=i+4)
     {
        if(strcmp(dic[i],palavra)==0) break;
     }
    if(*dic[i]) return (i+3);
    else return (-1);
 }

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char opcao='s';
    int linha,op;
    while(opcao=='s')
    {
        printf("\nDigite a frase desejada:");
        fflush(stdin);
        gets(frase);
        p=frase;
        pega_palavra();
        printf("\n");
        printf("=====Menu=====\n");
        printf("1-Portugues\n2-Alemao\n3-Frances\n\n");
        printf("Opcao: ");
        scanf("%i",&op);
        do
        {

            if (op==1){
                linha=traducao();
                if(linha!=-1)
                    printf("%s ",dic[linha]);
                else
                    printf("%s ",palavra);
                pega_palavra();}
            if (op==2){
                linha=traducaoAl();
                if(linha!=-1)
                    printf("%s ",dic[linha]);
                else
                    printf("%s ",palavra);
                pega_palavra();
            }
            if (op==3){
                linha=traducaoFr();
                if(linha!=-1)
                    printf("%s ",dic[linha]);
                else
                    printf("%s ",palavra);
                pega_palavra();
            }
        }while(*palavra);
     printf("\nQuer traduzir outra frase?s/n\n");
     opcao=getche();

    }
    return 0;
}
