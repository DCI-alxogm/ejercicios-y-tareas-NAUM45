/*
Febrero 12, 2025
Uziel IBARRA
Primer programa, mostrando estra, definición de variables, imprimir 
*/


#include<stdlib.h>//libreria estandar de c.
#include<stdio.h>//libreria para interaccion en la pantalla.

int main( ){
    char nombre[18];
    int edad;
    float temperatura;
    //cuerpo del programa;
    printf("¿cual es tu nombre? \n");
    scanf("%s", nombre);
    printf("Hola, %s este es el segundo programa del curso PB2025\n", nombre); //el caracter "\n" indica un salto de linea.
    
    printf("Introduce tu edad \n");
    scanf("%i", &edad); // %i indica el tipo de variable (entero en este caso).
    printf("¿Que temperatura marco el termometro la ultima vez que fuiste al supermecado? \n");
    scanf("%f", &temperatura);
    
    printf("Tu edad es: %i\n", edad);
    printf("Tu ultimo registro de temperatura fue: %f\n", temperatura);
    printf("pues bien %s de %i años y que amanecio con una temperatura de %f gracias por tu compañia.\n", nombre, edad, temperatura);
    exit(0);
    }

    
   
    
   
