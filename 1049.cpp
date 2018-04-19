#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

char a[20],b[20],c[20];


 while(scanf("%s%s%s",a,b,c)==3)
 {


    if(  strcmp(a,"vertebrado")==0)
    {

          if(strcmp(b,"mamifero")==0)
             {
              if( strcmp(c,"onivoro")==0)
              {
                  printf("homem\n");
              }
              if(strcasecmp(c,"herbivoro")==0)
                printf("vaca\n");
            }

        else if(strcmp(b,"ave")==0)
             {
              if( strcmp(c,"carnivoro")==0)
              {
                  printf("aguia\n");
              }
              if(strcasecmp(c,"onivoro")==0)
                printf("pomba\n");
            }
    }

    else if(  strcmp(a,"invertebrado")==0)
    {

          if(strcmp(b,"anelideo")==0)
             {
              if( strcmp(c,"onivoro")==0)
              {
                  printf("minhoca\n");
              }
              if(strcasecmp(c,"hematofago")==0)
                printf("sanguessuga\n");
            }

        else if(strcmp(b,"inseto")==0)
             {
              if( strcmp(c,"hematofago")==0)
              {
                  printf("pulga\n");
              }
              if(strcasecmp(c,"herbivoro")==0)
                printf("lagarta\n");
            }
    }

 }
return 0;
}

