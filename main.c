//ESERCIZIO:
//DARE IN INGRESSO STRINGHE NUMERICHE
//E STAMPARE LA SOMMA DI TUTTE
#include <string.h>
#include <stdio.h>
int i;
int sum=0;
char str[100][20];
int main(int argc, char *argv[]) {
  for(i=0;i<argc;i++)
    {
      printf("Pos %d\t stringa: %s\n",i,argv[i]);
      strcpy(str,argv[i]);
      sum += atoi(str);
    }

