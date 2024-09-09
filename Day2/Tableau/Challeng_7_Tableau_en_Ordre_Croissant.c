/*
Écrivez un programme C qui demande à l'utilisateur de saisir un tableau d'entiers, 
puis affiche le tableau trié en ordre croissant sans utiliser de fonction de tri prédéfinie.
*/

#include <stdio.h>

int main() {
    int taille;
    printf("saisir la taille du tableau:");
    scanf("%d",&taille);
     int tableau[taille];
int count=0;
  for(int i=0;i<taille;i++){
      printf("tableau[%d]=",i+1);
      scanf("%d",&tableau[i]);
      
  }
    for(int i=0;i<taille;i++){
     for(int j=0;j<taille;j++){
      if(i==j){
         break;
     }    
        
      count++;
   if(tableau[i]<tableau[j]){
      tableau[i]=tableau[i]+tableau[j];
      tableau[j]=tableau[i]-tableau[j];
      tableau[i]=tableau[i]-tableau[j];
   }
     }
    
     
       

  }
     for(int i=0;i<taille;i++){
    printf("%d\n",tableau[i]);
   
  }
       printf("i= %d",count);
 
}