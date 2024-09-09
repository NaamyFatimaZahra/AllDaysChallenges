/*
Écrivez un programme C qui trouve et affiche le plus petit élément dans un tableau d'entiers. 
Le programme doit demander le nombre d'éléments et les éléments du tableau.
*/
#include <stdio.h>

int main() {
    int taille;
    printf("saisir la taille du tableau:");
    scanf("%d",&taille);
     int tableau[taille];
  int min=tableau[0];
  for(int i=0;i<taille;i++){
      printf("tableau[%d]=",i+1);
      scanf("%d",&tableau[i]);
      
  }
    for(int i=0;i<taille;i++){
     
   if(min>tableau[i]){
       min=tableau[i];
   }
   
  }
   printf("%d\n",min);
}