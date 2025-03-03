#include "stdio.h"

int main(){
int numero, residuo;
char opc[2];
leernumero:
printf("Introduce un numero para saber si es par i impar\n");
scanf("%",&numero);
residuo=numero%2;
if (residuo==0){
   printf("el numero %i es par\n",numero);
}else{
     printf("el numero %i es par\n",numero);
     }
printf("¿quieres revisar otro numero?");
scanf("%s",opc);
if (opc=="si"){
   goto leernumero;
}else{
     printf("hasta la proxima!");
   }
   return(0);
   
   }
