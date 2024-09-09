/*
Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, et age.
 Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.
*/

#include <stdio.h>
struct informations{
    char nom[12];
    char prenom[12];
    int age;
};
  int main() {
   struct informations infos;
   printf("saisir le nom:");
   gets(infos.nom);
   printf("saisir le prenom:");
   gets(infos.prenom);
      printf("saisir l'age:");
      scanf("%d",&infos.age);
   printf("le nom:%s,le prenom:%s,l'age:%d",infos.nom,infos.prenom,infos.age);

}
