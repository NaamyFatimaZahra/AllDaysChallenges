// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int taille;
    printf("saisir la taille du tableau:");
    scanf("%d",&taille);
     int tableau[taille];
     int codeCoplixity=0;
     int resultTaille=1;
     int result[resultTaille];

  for(int i=0;i<taille;i++){
      printf("tableau[%d]=",i+1);
      scanf("%d",&tableau[i]);
      
  }
    for(int i=0;i<taille;i++){
     for(int j=0;j<taille;j++){
      if(tableau[i]==tableau[j]){
         break;
     }    
        
      codeCoplixity++;
   if(tableau[i]!=tableau[j]){
    result[resultTaille-1]=tableau[i];
    resultTaille++;
   }
     }
    
     
       

  }
     for(int i=0;i<resultTaille-1;i++){
    printf("%d\n",result[i]);
   
  }
       printf("i= %d",codeCoplixity);
 
}