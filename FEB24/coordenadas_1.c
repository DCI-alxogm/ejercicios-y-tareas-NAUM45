/* Revision del ejercicio del 19 de febrero.
Escrito el 24 de febrero*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
        
        float x,y,z; //coordenadas cartesianas de entrada
        float r,theta,phi; //coordenadas esfericas de salida
        float rc,theta_c,zc; //coordenadas cilindricas de salida
        
        printf("Introduce los valores de las variables x,y,z que quieres convertir\n");
        scanf("%f",&x);
        scanf("%f",&y);
        scanf("%f",&z);
        
        //realizo operaciones de transformacion de coordenadas
        //coordenadas esfericas
        r=sqrt(x*x+y*y+z*z);
        theta=atan(y/x);
        phi=acos(z/r);
        
        //coordenadas cilindricas
        rc=sqrt(x*x+y*y);
        theta_c=atan(y/x);
        zc=z;
        
        //SALIDA
        printf("las coordenadas esfericas son r=%,theta=%f, phi=%f \n",r,theta,phi);
        printf("las coordenadas cilindricas son r=%f, theta=%f, z=%f \n",r,theta_c,zc);
        exit(0);
        }
        
