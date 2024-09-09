/*Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau, 
puis demande à l'utilisateur de saisir ces éléments. Affichez ensuite les éléments du tableau.*/

#include <stdio.h>

int main() {
    int taille;
    printf("saisir la taille du tableau:");
    scanf("%d",&taille);
    
  int tableau[taille];
  for(int i=0;i<taille;i++){
      printf("tableau[%d]=",i+1);
      scanf("%d",&tableau[i]);
      
  }
    for(int i=0;i<taille;i++){
      printf("%d\n",tableau[i]);
      
  }
}