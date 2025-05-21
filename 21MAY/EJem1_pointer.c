#include <stdio.h>

int main() {
 int var=20;
 int *ip;
 ip=&var;
 printf("La direccion de la variable var es %p\n", &var);
 printf("EL valor de la variable ip es %p\n", ip);
 printf("El valor escrito en la dirección %p es: %d\n", ip, *ip);
 }
