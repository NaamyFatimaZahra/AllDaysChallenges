/*
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards.
*/
#include <stdio.h>

int main() {
   
float distanceKilomètres,distanceYards;
printf("saisir la distance en kilomètres:");
scanf("%f",&distanceKilomètres);
distanceYards=distanceKilomètres * 1093.61;
printf("la distance en yards est:%.2f",distanceYards);
    
}