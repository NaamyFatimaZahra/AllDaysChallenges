/*
Écrivez un programme C qui affiche uniquement les éléments pairs d'un tableau d'entiers.
 Le programme doit demander le nombre d'éléments et les éléments du tableau.
*/
#include <stdio.h>

int main() {
    int taille ;
    printf("saisir la taille:");
    scanf("%d",&taille);
    int tableau[taille];

    for(int i=0;i<taille;i++){
      printf("tableau[%d]=",i);
      scanf("%d",&tableau[i]);
      
  }
    for(int i=0;i<taille;i++){
 if(tableau[i]%2==0){
           printf("%d\n",tableau[i]);

  }
 }
 

 
}