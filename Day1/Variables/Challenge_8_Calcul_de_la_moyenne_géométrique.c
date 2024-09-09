/*
Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur.
*/
#include <stdio.h>
#include <math.h>

int main() {
   
float nombreA,nombreB,nombreC,MoyenneGéométrique;
printf("saisir le nombre A:");
scanf("%f",&nombreA);
printf("saisir le nombre B:");
scanf("%f",&nombreB);
printf("saisir le nombre c:");
scanf("%f",&nombreC);
MoyenneGéométrique=pow((nombreA*nombreB*nombreC),(1/3));
printf("le moyenne est:%.2f",MoyenneGéométrique);
}