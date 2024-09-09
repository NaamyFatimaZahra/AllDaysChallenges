/*
Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur et largeur. Écrivez une fonction qui prend une variable de cette structure
 en argument et calcule l'aire du rectangle. Affichez l'aire dans le programme principal.
*/
#include <stdio.h>
struct informations{
    float longeur;
   float largeur;
};
void air(float *longeur,float *largeur){
printf("%.2f",*longeur* *largeur);

}
  int main() {
      struct informations infos;

      printf("l'argeur est:");
      scanf("%f",&infos.largeur);

      printf("l'longeur est:");
      scanf("%f",&infos.longeur);

     air(&infos.longeur,&infos.largeur);

}
