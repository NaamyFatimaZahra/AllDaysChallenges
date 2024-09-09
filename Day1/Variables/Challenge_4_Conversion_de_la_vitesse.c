/*
Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). 
*/
#include <stdio.h>

int main() {
   
float vitesseKmHeure,vitesseKmSeconde;
printf("saisir la  vitesse en kilomètres par heure:");
scanf("%f",&vitesseKmHeure);
vitesseKmSeconde=vitesseKmHeure  * 0.27778;
printf("la vitesse en kilomètres par seconde est:%.2f",vitesseKmSeconde);
    
}