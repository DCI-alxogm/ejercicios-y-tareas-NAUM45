/* HOLA
FEBRERO 24, 2025
NAUM IBARRA
Esta es la primer tarea donde se tiene que ejecutar operaciones pero nososotros ingresaremos los numeros desde la terminal
*/

#include<stdlib.h>
#include<stdio.h>
int main(){
        float a,b,c,d;
        float e1,e2,e3,e4;
        //pedir numeros
        printf("¿Que numeros quieres para las operaciones?\n");
        scanf("%f %f %f %f", &a, &b, &c, &d);
        //HACER las operaciones
        e1=(a+b)*c/d;
        e2=((a+b)*c)/d;
        e3=(a+b)*(c/d);
        e4=a+b*c/d;
        //Mostrar los resultados
        printf("%f\n",e1);
        printf("%f\n",e2);
        printf("%f\n",e3);
        printf("%f\n",e4);
        }
        
