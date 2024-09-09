/*
Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.
*/

// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
float nombreA,nombreB;
debut:
printf("saisir le nombre A et le nombre B:");
scanf("%f %f",&nombreA,&nombreB);
printf("la somme est:%.f\n",nombreA+nombreB);
printf("la multiplication est:%.f\n",nombreA*nombreB);
printf("la soustraction est:%.f\n",nombreA-nombreB);
if(nombreA==0||nombreB==0){
    printf("saisir un nombre superieure a 0;");
    goto debut;

}else{
    printf("la division est:%.f",nombreA/nombreB);

}
}