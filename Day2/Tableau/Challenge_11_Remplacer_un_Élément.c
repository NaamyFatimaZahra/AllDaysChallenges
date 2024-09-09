/*

Écrivez un programme C qui remplace toutes les occurrences d'une valeur spécifique dans un tableau d'entiers par une nouvelle valeur. Le programme doit demander à l'utilisateur le nombre d'éléments,
 les éléments du tableau, la valeur à remplacer, et la nouvelle valeur.*/

#include <stdio.h>

int main() {
    int nombre;
    int tableau[4];
    int index;
  
    for(int i=0;i<4;i++){
      printf("tableau[%d]=",i);
      scanf("%d",&tableau[i]);
  }
    printf("saisir le nombre :");
    scanf("%d",&nombre);
      printf("saisir l'index :");
    scanf("%d",&index);

    for(int i=0;i<4;i++){
 if(i==index){
     tableau[i]=nombre;
  }
 }
 
for(int i=0;i<4;i++){
      printf("%d\n",tableau[i]);
  
      
  }
 
}