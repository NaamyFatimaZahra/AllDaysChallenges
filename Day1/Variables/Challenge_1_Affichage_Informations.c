/*
Écrivez un programme en C qui va permettre d'afficher vos informations personnelles :
 nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.
*/
#include<stdlib.h>
#include<stdio.h>
int main(){
 int age;
 char sexe[9];
 char adresseMail[12];
 char nom[12],prenom[12];
 printf("saisir le nom:");
 gets(nom);
  printf("saisir le prenom:");
 gets(prenom);
  printf("saisir le adresseMail:");
 gets(adresseMail);
  printf("saisir le sexe:");
 gets(sexe);
  printf("saisir l'age:");
  scanf("%d",&age);
 printf("le nom:%s,le prenom:%s,l'adresse mail:%s,le sexe:%s,l'age:%d.",nom,prenom,adresseMail,sexe,age);
}
