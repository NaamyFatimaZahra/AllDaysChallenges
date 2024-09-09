/*
Écrivez un programme C qui fusionne deux tableaux d'entiers en un seul tableau. Le programme doit demander à l'utilisateur le nombre d'éléments pour chaque tableau, 
puis les éléments des deux tableaux, et afficher le tableau fusionné.
*/

#include <stdio.h>

int main() {
    int tailleOne,tailleTwo ;
    printf("saisir la taille du tableau un et tableau deux:");
    scanf("%d %d",&tailleOne,&tailleTwo);
    int tableauOne[tailleOne];
    int tableauTwo[tailleTwo];

    for(int i=0;i<tailleOne;i++){
      printf("tableau[%d]=",i);
      scanf("%d",&tableauOne[i]);
      
  }
   for(int i=0;i<tailleTwo;i++){
      printf("tableau[%d]=",i);
      scanf("%d",&tableauTwo[i]);
      
  }
    for(int i=0;i<tailleOne+tailleTwo;i++){
tableauOne[tailleTwo]=tableauTwo[i];
 }
    for(int i=0;i<tailleOne+tailleTwo;i++){
printf("T[%d]=%d\n",i,tableauOne[i]);
 }
 
 

 
}