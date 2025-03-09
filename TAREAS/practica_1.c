/* estoy practicando*/

#include<stdlib.h>
#include<stdio.h>


int main()
{
char nombre[10];
int edad;
float temperatura;
//preguntame mi nombre;
printf("¿cual es tu nombre?\n");
scanf("%s", nombre);
printf("hola, %s este es el segundo programa del curso\n",nombre);
//preguntame la edad
printf("Introduce tu edad\n");
scanf("%i", &edad);
//preguntame la temperatura
printf("¿que temperatura marco el termometro la ultima vez que fuiste al super mercado?\n");
scanf("%f", &temperatura);

printf("tu nombre es: %s\n", nombre);
printf("tu edad es: %i\n", edad);
printf("tu ultimo registro de temperatura fue: %f\n", temperatura);
 exit(0);
}

