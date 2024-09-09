/*
Écrivez un programme en C pour calculer la moyenne pondérée de 
trois nombres donnés par l'utilisateur avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5
*/
#include <stdio.h>

int main() {
   
float nombreA,nombreB,nombreC,moyenne;
printf("saisir le nombre A:");
scanf("%f",&nombreA);
printf("saisir le nombre B:");
scanf("%f",&nombreB);
printf("saisir le nombre c:");
scanf("%f",&nombreC);
moyenne=((nombreA*2)+(nombreB*3)+(nombreC*5))/(2+5+3);
printf("le moyenne est:%.2f",moyenne);
}