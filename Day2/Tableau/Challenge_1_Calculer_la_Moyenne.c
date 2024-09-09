/*
Écrivez un programme C qui calcule la moyenne des éléments d'un tableau d'entiers. 
Le programme doit demander le nombre d'éléments, les éléments du tableau, puis afficher la moyenne.
*/

#include <stdio.h>

int main() {
    int taille ;
    printf("saisir la taille:");
    scanf("%d",&taille);
    int tableau[taille];
float somme=0;
float moyenne=0;
    for(int i=0;i<taille;i++){
      printf("tableau[%d]=",i);
      scanf("%d",&tableau[i]);
      
  }
    for(int i=0;i<taille;i++){
 somme+=tableau[i];
 }
 moyenne=somme/taille;
 printf("le moyenne est:%.2f",moyenne);
 

 
}