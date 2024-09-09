/*
Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers. 
Le programme doit demander le nombre d'éléments et les éléments du tableau.
*/
#include <stdio.h>

int main() {
    int taille;
    printf("saisir la taille du tableau:");
    scanf("%d",&taille);
     int tableau[taille];
  int max=tableau[0];
  for(int i=0;i<taille;i++){
      printf("tableau[%d]=",i+1);
      scanf("%d",&tableau[i]);
      
  }
    for(int i=0;i<taille;i++){
     
   if(max<tableau[i]){
       max=tableau[i];
   }
   
  }
   printf("%d\n",max);
}