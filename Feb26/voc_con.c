#include<stdio.h>

int main() {
   char letra;
   //pedir al usuario que ingrese una letra
   printf("Introduce una letra: ");
   scanf("%c", &letra);
   
   //verificar si es una vocal o consonante
if(letra== 'a' || letra == 'e' || letra== 'i' || letra== 'o' || letra== 'u') {
printf("La letra '%c' es una vocal.\n", letra);
}else if((letra>= 'a' && Letra <= 'z')) {
printf("La letra '%c' es una consonante.\n", letra);
} else {
printf("La letra es vocal.\n");

}
return 0;
