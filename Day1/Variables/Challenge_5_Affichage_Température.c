/*
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). 
*/

#include <stdio.h>

int main() {
   
int temperature;
printf("saisir la température:");
scanf("%d",&temperature);

if(temperature<0) {
    printf("la temperature de l'eau est Solide.");
}else if(temperature>=0&&temperature<100) {
    printf("la temperature de l'eau est Liquide.");
}else{
    printf("la temperature de l'eau est Gaz.");
}  
}