/*
Écrivez un programme C qui définit une structure pour représenter un livre avec les champs titre, auteur, et année. 
Écrivez une fonction qui retourne une variable de cette structure initialisée avec des valeurs données.
 Affichez les informations du livre dans le programme principal.
*/
#include <stdio.h>
typedef struct{
  char nom[12];
  char auteur[12];
  int annee;
}livres;
livres allInfos[20];
void infosLivre(){
    printf("saisir le nom du livre:");
    scanf("%s",&allInfos[0].nom);
 printf("saisir l'auteur du livre:");
    scanf("%s",&allInfos[0].auteur);
     printf("saisir l'annee du livre:");
    scanf("%d",&allInfos[0].annee);
}
int main()
{

   infosLivre();
  printf("le nom:%s,l'auteur:%s;l'annee:%d.",allInfos[0].nom,allInfos[0].auteur,allInfos[0].annee);


}
