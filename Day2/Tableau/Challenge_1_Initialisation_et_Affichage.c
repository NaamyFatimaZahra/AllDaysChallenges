/*Écrivez un programme C qui initialise un tableau d'entiers avec des valeurs données et affiche ces valeurs. Par exemple, 
vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.*/

#include <stdio.h>

int main() {
  int tableau[4]={1,2,3,4,};
  for(int i=0;i<4;i++){
      printf("%d\n",tableau[i]);
      
  }
}