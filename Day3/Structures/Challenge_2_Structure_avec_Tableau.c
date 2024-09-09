/*
crivez un programme C qui définit une structure pour représenter un étudiant avec les champs nom, prenom, et un tableau d'entiers pour stocker les notes. 
Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant.
*/
#include <stdio.h>
struct informations{
    char nom[12];
    char prenom[12];
    int note[4];
};
  int main() {
   struct informations infos;
   printf("saisir le nom:");
   gets(infos.nom);
   printf("saisir le prenom:");
   gets(infos.prenom);
     for(int i=0;i<4;i++){
      printf("la note %d:",i);
      scanf("%d",&infos.note[i]);
      }
     printf("le nom:%s,le prenom:%s\n",infos.nom,infos.prenom);
   printf("les notes sont:\n");
     for(int i=0;i<4;i++){
      printf("%d\n",infos.note[i]);
      }


}
