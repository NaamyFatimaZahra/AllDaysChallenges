/*
Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers.
 Le programme doit demander le nombre d'éléments, puis les éléments du tableau, et afficher la somme totale.
*/
#include <stdio.h>

int main() {
    int taille;
    printf("saisir la taille du tableau:");
    scanf("%d",&taille);
    int somme=0;
  int tableau[taille];
  for(int i=0;i<taille;i++){
      printf("tableau[%d]=",i+1);
      scanf("%d",&tableau[i]);
      
  }
    for(int i=0;i<taille;i++){
     
      somme+=tableau[i];
  }
   printf("%d\n",somme);
}