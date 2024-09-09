
/*
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. 
*/

#include <stdio.h>

int main() {
   
float temperatureCelsuis,temperatureKelvin;
printf("saisir la temperature en celsuis:");
scanf("%f",&temperatureCelsuis);
temperatureKelvin=temperatureCelsuis + 273.15;
printf("Temperature Kelvin est:%.2f",temperatureKelvin);
    
}