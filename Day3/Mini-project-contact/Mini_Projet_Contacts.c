
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/*-------------------------------------------structure-------------------------------------------*/
typedef struct information{
char nom[15];
char prenom[15];
char number[15];
char email[20];
}information;
information allContacts[100];
int count=0;
int existeName=0;
/*-------------------------------------------fonction clear-------------------------------------------*/
void clearConsole(){
        system("@cls||clear");
        };
/*-------------------------------------------fonction entrer le nom et le prenom -------------------------------------------*/

        int entrerNomPrenom(){
        char Nom[15],Prenom[15];
        printf("saisir le Nom:");
        scanf("%s",&Nom);
          printf("saisir le Prenom:");
        scanf("%s",&Prenom);
        int i=0;       for(i;i<=count;i++){
        if(!strcmp(Nom,allContacts[i].nom)&&!strcmp(Prenom,allContacts[i].prenom)){
        existeName++;
        break;
        }
       }
 return i;
        }
/*-------------------------------------------fonction ajout-------------------------------------------*/

void ajoutContact(){

printf("saisir le nom de contact:");
scanf("%s",&allContacts[count].nom);

printf("saisir le prenom de contact:");
scanf("%s",&allContacts[count].prenom);

printf("saisir le number de contact:");
scanf("%s",&allContacts[count].number);

printf("saisir le email de contact:");
scanf("%s",&allContacts[count].email);
count++;
}

/*-------------------------------------------fonction afficherContact-------------------------------------------*/
void afficherContact(){

if(count>0){

for(int i=0;i<count;i++){
printf(" le nom est: %s,le prenom est: %s,le numero de telephone est:%s,l'email est:%s.\n",allContacts[i].nom,allContacts[i].prenom,allContacts[i].number,allContacts[i].email);

}
}else{
printf("il ya aucun contact.\n");
}

}
/*-------------------------------------------fonction modifierContact-------------------------------------------*/
void modifierContact(){

char Numero[15];
char Email[15];
 int index=entrerNomPrenom();
if(existeName>0){
printf("saisir le nouveau number de contact :");
scanf("%s",&Numero);

printf("saisir le nouveau email de contact:");
scanf("%s",&Email);
strcpy(allContacts[index].number,Numero);
strcpy(allContacts[index].email,Email);

}else{
        printf("il ya aucun contact avec ce nm et prenom.\n");

        }
}
/*-------------------------------------------fonction supprimerContact-------------------------------------------*/

void supprimerContact(){
 int index=entrerNomPrenom();
if(existeName>0){
strcpy(allContacts[index].nom,allContacts[index+1].nom);
strcpy(allContacts[index].prenom,allContacts[index+1].prenom);
strcpy(allContacts[index].number,allContacts[index+1].number);
strcpy(allContacts[index].email,allContacts[index+1].number);
count --;
}else{
        printf("il ya aucun contact avec ce nm et prenom.\n");

        }

}
/*-------------------------------------------fonction rechercherContact-------------------------------------------*/

void rechercherContact(){
 int index=entrerNomPrenom();
if(existeName>0){
printf(" le nom est: %s,le prenom est: %s,le numero de telephone est:%s,l'email est:%s.\n",allContacts[index].nom,allContacts[index].prenom,allContacts[index].number,allContacts[index].email);

}else{
        printf("il ya aucun contact avec ce nm et prenom.\n");

        }

}
/*-------------------------------------------fonction main-------------------------------------------*/
int main(){
int N=0;
while(1){
printf("1. Ajouter un Contact:\n");
printf("2. Afficher Tous les Contacts:\n");
printf("3. Modifier un Contact\n");
printf("4. Supprimer un Contact:\n");
printf("5. Rechercher un Contact:\n");
printf("choisi un nombre:");
scanf("%d",&N);
clearConsole();

switch(N){
     case 1:
     ajoutContact();
     break;
     case 2:
     afficherContact();
     break;
   case 3:
     modifierContact();
     break;
      case 4:
     supprimerContact();
     break;
     case 5:
     rechercherContact();
     break;
}
}


}
