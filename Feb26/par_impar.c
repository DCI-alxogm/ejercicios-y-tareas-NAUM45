/*
Hice el programa del dia 26feb25 calcula si un numero es par o no, pregunta si quiere verificar otro numero o no*/

#include<stdio.h>
#include<string.h>
int main()
{
//definimos variables
int numero,residuo;
char respuesta[3];
//explica lo que hace el programa
printf("introduce un numero y tedire si es par o impar:\n");
//lee los datos dados por un tercero
scanf("%i",&numero);
//calculo el residuo de la divicion con el modulo
residuo=numero%2;
//condicional, el numero es par
if(residuo==0){
//salida
printf("%i" el numero es par\n",numero);
}else{
printf("%i" el numero es impar\n"numero);
}
//2do condicional,quiere verificar otro numero
printf(""quieres verificar otro numero:\n");
scanf("%s",respuesta);
if(strcmp(respuesta,"si")==0){
printf("si quiero verificar\n");
}
if(strcmp(respuesta,"no")==0){
printf("no quiero verificar\n");
}

