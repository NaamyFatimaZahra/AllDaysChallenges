/*
Écrivez un programme C qui définit une structure pour représenter un point dans un plan avec les champs x et y. 
Utilisez des pointeurs pour créer une variable de cette structure et modifiez ses valeurs. Affichez les valeurs du point.
*/
#include <stdio.h>
struct informations{
    float X;
   float Y;
};

  int main() {
      struct informations *infos,information;
      infos=&information;
      printf("X est:");
      scanf("%f",&infos->X);

      printf("Y est:");
      scanf("%f",&infos->Y);

      infos->X=3;
      infos->Y=6;
      printf("X:%f",infos->X);
           printf("Y:%f",infos->Y);


}
