#include<stedio.h>
#include<stdlib.h>
#include<math.h>

int main() {
   float tk, tc; //temperatura
   float x,y,z,rc,r,theta, phi;//coordenadas cartesianas
   int opc, opcCoord; //opciones del usuario
   
 repetirtodo:
 printf("\nseleccione una opción:\n");
 printf("0-convertir temperatura (°C a °K)\n");
 printf("1-convertir coordenadas cartesianas\n");
 printf("opcion: ");
 scanf("%d", &opc);
 
 if(opc==0) {
   goto temperatura;
} else if(opc==1) {
   goto tipocoordenadas;
 } else{
 printf("opcion no valida. Intente de nuevo.\n");
   goto repetirtodo;
  
 }
 
temperatura:
printf("\nIngrese la temperatura a convertir (°C): ");
scanf("%f", &tc);
tk=tc+273.15;
printf("su temperaturaen Kelvin es:%.2f\n",tk);
goto preguntar;

tipocoordenadas:
printf("\nSeleccione la conversion de coordenadas desde cartesianas:\n");
printf("1-A coordenadas cilindricas\n");
printf("2-A coordenadas esfericas\n");
printf("Opcion: ");
scanf("%d", &opccoord);
if (opccoord==1){
goto cartesianasAcilindricas;
} else if(opccoord==2){
goto cartesianasAesfericas;
}else{
printf("opcion no valida. Intente de nuevo.\n");
goto tipocoordenadas;
}

cartesianasAcilindricas:
printf("\nIngrese las coordenadas cartesianas (x,y,z):");
scanf("%f %f %f", &x, &y, &z);
rc=sqrt(x*x+y*y+z*z);
theta=atan2(y,x); //Angulo en radianes
printf("Coordenadas cilindricas equivalentes:\n");
printf("rc= %.2f, theta=%.2f rad; z=%.2f\n", rc, theta,z);
goto preguntar;

cartesianasAesfericas:
printf("\nIngrese las coordenadas cartesianas (x,y,z): ");
scanf("%f %f %f", &x, &y, &z);

r=sqrt(x*x+y*y+z*z);
theta= atan2(y,x); //Angulo en radianes
phi= acos(z/r); //Angulo en radianes

printf("coordenadas esfericas equivalentes:\n");
printf("r=%.2f, theta=%.2f rad, phi=%.2f rad\n", r, theta,phi);
goto preguntar;

preguntar:
printf("\n¿Desea realizar otra conversion? (1:si, 0:no):");
scanf("%d", &opc);

if(opc==1){
goto repetirtodo;
}
printf("programa finalizado.\n");

return(0);
}
  
